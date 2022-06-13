// Problem:  Print lenght if Largest size Subarray with sum divisible by k
/*-------------------------------------------------------------------------------------*/
// Approach 1 :  Hashing
int longSubarrWthSumDivByK(int arr[], int n, int k) {
    unordered_map<int, int> mp;
    int sum = 0, mx = 0;
    for (int i = 0; i < n; i++) { //Traverse through the array and store the prefix sum
        sum += arr[i];
        int rem = sum % k;  
        if (rem == 0)  //If sum is divisible by k, Check if it has max length. If yes, Store it.
            mx = max(i + 1, mx);
        if (rem < 0){  //If remainder is -ve, then make it +ve by adding k to it and Store it.
			rem += k;
		}
        if (mp.find(rem) == mp.end()) {  //Check if we're not getting the same remainder value matching to any previous remainder value 
            mp[rem] = i;  //If true, store that rem-value in map.
        } else {
            int len = i - mp[rem];  //If remainder is not-unique, check the position difference between previous and current rem and,
            mx = max(mx, len);  //Store if if it is max value.
        }
    }
    return mx;  //At last, return the largest length of subarray
}
// Time Complexity:  O(N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
