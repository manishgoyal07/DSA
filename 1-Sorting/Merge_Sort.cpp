// //Problem:  
// //-------------------------------------------------------------------------------------
// //Code :  

#include<bits/stdc++.h>
using namespace std;


// class Solution{
// public:

// void merge(vector<int> &arr, int l, int m, int r){
// int i=l, j=m+1;
// vector<int> temp;
// while(i<=m && j<=r){
// 	if(arr[i]<=arr[j]){
// 		temp.push_back(arr[i]);
// 		i++;
// 	}
// 	else{
// 		temp.push_back(arr[j]);
// 		j++;
// 	}
// }
// while(i<=m){
// 		temp.push_back(arr[i]);
// 		i++;
// }
// while(j<=r){
// 		temp.push_back(arr[j]);
// 		j++;
// }
// for(int i=l; i<=r; i++){
// arr[i] = temp[i-l];
// }
// }

// void merge_sort(vector<int> arr, int l, int r){
// 	if(l>=r) return;
// 	int mid = l+(r-l)/2;
// 	merge_sort(arr, l, mid);
// 	merge_sort(arr, mid+1, r);
// 	merge(arr, l, mid, r);
// }


// };


int main(){
	// Solution obj;
	vector<int> arr;
	int n;
	cin>>n;
	int temp;
	for(int i=0; i<n; i++){
		cin>>temp;
		arr.push_back(temp);
	}
	// obj.merge_sort(arr, 0, n-1);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}

//Time Complexity:  O(NlogN)
//Auxilary Space Complexity:  O(N)
//-------------------------------------------------------------------------------------
	