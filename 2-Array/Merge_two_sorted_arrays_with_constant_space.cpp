//Problem:  Merge Without Extra Space
//-------------------------------------------------------------------------------------
//Code :  

class Solution{
public:

	void shellsort(long long arr1[], long long arr2[], int n, int m){

		int gap = ceil((float)(n + m) / 2);
		while(gap>0){
			int i=0, j=gap;
			while(j<(n+m)){
				if(j<n){
					if(arr1[i]>arr1[j]) swap(arr1[i],arr1[j]);
					i++; j++;
				}
				else if(j>=n && i<n){
					if(arr1[i]>arr2[j-n]) swap(arr1[i],arr2[j-n]);
					i++; j++;
				}
				else if(j>=n && i>=n){
					if(arr2[i-n]>arr2[j-n]) swap(arr2[i-n],arr2[j-n]);
					i++; j++;
				}
				else continue;
			}
			if(gap==1) gap=0;
			else gap = ceil((float)gap / 2);
		}
	}

	void merge(long long arr1[], long long arr2[], int n, int m){
		shellsort(arr1, arr2, n, m);
	}

};

//Time Complexity:  O()
//Auxilary Space Complexity:  O()
//-------------------------------------------------------------------------------------
