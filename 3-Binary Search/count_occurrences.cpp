//Problem:  Count Occurrences
//-------------------------------------------------------------------------------------
//Code :  

class Solution{
public:

	int count(int arr[], int n, int x) {
		int start = lower_bound(arr, arr+n, x)-arr;
		int end = upper_bound(arr, arr+n, x)-arr-1;
		int count = end-start+1;
		if(start==n)return 0;
	   else return count;// code here
	}

};

//Time Complexity:  O(2logN)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
