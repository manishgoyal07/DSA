// Problem:  Reverse the Array
/*-------------------------------------------------------------------------------------*/
// Approach 1 : 2-Pointer
string reverseWord(string str) {
    int i = 0, j = str.size() - 1;
    while (i < j) {
        swap(str[i], str[j]);
        i++;
        j--;
    }
    return str;
}
// Time Complexity:  O(N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
