// Problem:  // 79. Word Search
/*-------------------------------------------------------------------------------------*/
// Approach 1 :
bool search(vector<vector<char>>& board, int i, int j, string& word, int n) {
    if (n == word.size()) return true;
    if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() ||
        board[i][j] != word[n]) {
        return false;
    }
    board[i][j] = '*';                                   // Mark for visited
    bool res = (search(board, i - 1, j, word, n + 1) ||  // search Up-wards
                search(board, i + 1, j, word, n + 1) ||  // search Down-wards
                search(board, i, j - 1, word, n + 1) ||  // search Left-wards
                search(board, i, j + 1, word, n + 1));   // search Right-wards

    board[i][j] = word[n];  // Remove the visited Mark
    return res;
}

bool exist(vector<vector<char>>& board, string word) {
    int m = board.size();
    int n = board[0].size();
    // Search for the first character of word. If it is fount, search for otehr
    // characters.
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == word[0] && search(board, i, j, word, 0))
                return true;
        }
    }
    return false;
}
// Time Complexity:  O(M*N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
