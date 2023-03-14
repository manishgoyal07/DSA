//Problem:  
//-------------------------------------------------------------------------------------
//Code :  

class Solution{
public:

void Bubble_Sort(vector<int> arr, int n){
	if(n<=1) return;
	for(int i=0; i<n-1; i++){
		for(int j=1; j<n-i; j++){
			if(arr[j-1]>arr[j]) swap(arr[j-1], arr[j]);
			else continue;
		}
	}
}

};

//Time Complexity:  O(N^2)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
	