// Problem:  79. Word Search
/*-------------------------------------------------------------------------------------*/
// Approach 1 : DFS + Recursion
#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<char>> &board, string &word, int index, int i, int j) {
    if (index == word.size()) {
        return true;  // If whole string is found
    } else if (i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[index]) {
        return false;  // Edge cases
    } else {
        board[i][j] = '*';                                        // Mark for visited
        bool isfound = (dfs(board, word, index + 1, i - 1, j) ||  // check Up-wards
                        dfs(board, word, index + 1, i, j + 1) ||  // check Right-wards
                        dfs(board, word, index + 1, i + 1, j) ||  // check Down-wards
                        dfs(board, word, index + 1, i, j - 1));   // check Left-wards
        board[i][j] = word[index];                                // Removal of visited mark
        return isfound;
    }
}

bool exist(vector<vector<char>> &board, string word) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[0].size(); j++) {
            if (board[i][j] == word[0] && dfs(board, word, 0, i, j)) {  // Check if the first element of string exists in the grid & whole String is present or not
                return true;
                break;
            } else {
                continue;
            }
        }
    }
    return false;
}

int main() {
    vector<vector<char>> board = {{'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};
    string word = "ABCCED";
    cout << exist(board, word) << endl;
    return 0;
}

// Time Complexity:  O(m*n)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
