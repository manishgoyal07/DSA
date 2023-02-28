//Problem:  
//-------------------------------------------------------------------------------------
//Code :  

class Solution{
public:

void Selection_sort(vector<int> arr, int n){
if(n<=1) return;
for(int i=0; i<n-1; i++){
	int idx=i;
    for(int j=i+1; j<n; j++){
	if(arr[j]<arr[idx]){
	idx = j;
		}
	}
	swap(arr[i], arr[idx]);
}
}
};

//Time Complexity:  O(N^2)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
	