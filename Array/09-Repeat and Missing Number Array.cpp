// Problem:  Repeat and Missing Number Array
/*-------------------------------------------------------------------------------------*/
// Approach 1 :
pair<int, int> findTwoElement(int *arr, int n) {
    int xor1 = arr[0], num1 = 0, num2 = 0;
    pair<int, int> ans;
    for (int i = 1; i < n; i++) {
        xor1 ^= arr[i];  // Calculate xor of all array Elements
    }
    for (int i = 0; i < n; i++) {
        xor1 ^= i;  // Calculate the xor of repeating and missing elements by
                    // doing xor of array elements with elements between 1 to N
    }
    int setbitno =
        xor1 & ~(xor1 - 1);  // Find the position of the first set bit of the
                             // xor to see where the differences begin
    for (int i = 0; i < n; i++) {
        if (arr[i] && setbitno) {  // Do xor of array elements with set bit at
                                   // that position
            num1 ^= arr[i];
        } else {  // Also Do xor of array elements with un-set bit at that
                  // position
            num2 ^= arr[i];
        }
    }
    for (int i = 1; i <= n; i++) {
        if (i && setbitno) {  // Do xor of numbers between 1 to N with set bit
                              // at that position
            num1 ^= i;
        } else {  // Also Do xor of numbers between 1 to N with unset bit at
                  // that position
            num2 ^= i;
        }
    }
    for (int i = 0; i < n;
         i++) {  // Find which no. is missing and which one is repeating
        if (arr[i] == num1) {
            num1 = ans.first;
            num2 = ans.second;
        } else {
            num2 = ans.first;
            num1 = ans.second;
        }
    }
    return ans;
}
// Time Complexity:  O(N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
