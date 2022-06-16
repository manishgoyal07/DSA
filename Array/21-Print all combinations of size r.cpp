// Problem:  Print all possible combinations of r elements in a given array of size n
/*-------------------------------------------------------------------------------------*/
// Approach 1 : BFS + Recursion
void combination(vector<int> &arr, int n, int r, int index, vector<int> &temp, int i) {
    if (index == r) {  // If index is at last element
        for (int j = 0; j < r; j++) {
            cout << temp[j] << " ";
        }
        cout << endl;
        return;
    }
    if (i >= n) {
        return;
    }
    temp[index].push_back() = arr[i];
    combination(arr, n, r, index + 1, temp, i + 1);  // For further elements of that combinations
    combination(arr, n, r, index, temp, i + 1);      // for next combinations
}
void printCombination(vector<int> &arr, int n, int r) {
    vector<int> &temp(r);  // Temp array to store each combination.
    combination(arr, n, r, 0, temp, 0);
}
// Time Complexity:  O(N^2)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
