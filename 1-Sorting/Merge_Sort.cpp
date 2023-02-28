//Problem:  
//-------------------------------------------------------------------------------------
//Code :  

class Solution{
public:

void merge(vector<int> arr, int l, int m, int r){
int i=l, j=m+1;
vector<int> temp;
while(i<=m && j<=r){
	if(arr[i]<=arr[j]){
		temp.push_back(arr[i]);
		i++;
	}
	else{
		temp.push_back(arr[j]);
		j++;
	}
}
while(i<=m){
		temp.push_back(arr[i]);
		i++;
}
while(j<=r){
		temp.push_back(arr[j]);
		j++;
}
for(int i=l; i<=r; i++){
arr[i] = temp[i-l];
}
}

void merge_sort(vector<int> arr, int l, int r){
	if(l>=r) return;
	int mid = l+(r-l)/2;
	merge_sort(arr, l, mid);
	merge_sort(arr, mid+1, r);
	merge(arr, l, mid, r);
}

};

//Time Complexity:  O(NlogN)
//Auxilary Space Complexity:  O(N)
//-------------------------------------------------------------------------------------
	