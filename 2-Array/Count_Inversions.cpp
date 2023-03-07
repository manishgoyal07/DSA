//Problem:  Count Inversions
//-------------------------------------------------------------------------------------
//Code :  

class Solution {
public:
	long long int Merge(long long arr[], int low, int mid, int high) {
		long long int count = 0;
		long long int j = mid + 1;
		for (long long int i = low; i <= mid; i++) {
			while (j <= high && arr[i] >  arr[j]) {
				count += (mid-i+1);
				j++;
			}
		}
		sort(arr+low, arr+high+1);
		return count;
	}
	long long int MergeSort(long long arr[], long long int low, long long int high) {
		if (low >= high) {
			return 0;
		}
		long long int count=0;
		long long int mid = (low + high) / 2;
		count += MergeSort(arr, low, mid);
		count +=  MergeSort(arr, mid + 1, high);
		count +=  Merge(arr, low, mid, high);
		return count;
	}
	long long int inversionCount(long long arr[], long long N){
		long long int count = 0;
		count += MergeSort(arr, 0, N-1);
		return count;
	}
};

//Time Complexity:  O(NlogN)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
