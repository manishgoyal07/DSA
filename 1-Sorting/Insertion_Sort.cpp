//Problem:  
//-------------------------------------------------------------------------------------
//Code :  

class Solution{
public:

void Insertion_Sort(vector<int> arr, int n){
	if(n<=1) return;
	for(int i=1; i<n; i++){
		int j=i, k=j-1;
		while(k>0 && arr[k]>arr[j]){
				swap(arr[k],arr[j]);
					j--; k--;
		}
	}
}

};

//Time Complexity:  O(N^2)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
	