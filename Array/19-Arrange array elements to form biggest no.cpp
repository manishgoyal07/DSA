// Problem:  Arrange given numbers to form the biggest number
/*-------------------------------------------------------------------------------------*/
// Approach 1 :
bool mycomparator(int a, int b) {  // We've made a custom comparator for the sort function.
    string x = to_string(a);       // It takes 2 string parameters and compares them based on the corresponding characters
    string y = to_string(b);
    if ((x + y) > (y + x)) {  // Here, we're checking which concatenated-string will be greater amoong the 2 combinations.
        return true;
    } else {
        return false;
    }
}

class Solution {
   public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), mycomparator);  // sort the integer array using custom comparator
        string ans = "";
        if (nums[0] > 0) {  // If all elements will be 0, we'll have to print "0" instead of "0000...."
            for (int i = 0; i < nums.size(); i++) {
                ans += to_string(nums[i]);  // Storing the element of nums array to answer after conversion.
            }
            return ans;
        } else {
            return "0";
        }
    }
};
// Time Complexity:  O(NLogN)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
