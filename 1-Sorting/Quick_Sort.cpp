//Problem:  
//-------------------------------------------------------------------------------------
//Code :  

class Solution{
public:

int Partition(vector<int> arr, int l, int r){
	int i=l, j=r;
	while(j>=i){
		while(arr[i]<=arr[l]) i++;
		while(arr[j]>arr[l]) j--;
		if(i<j) swap(arr[i], arr[j]);
	}
	swap(arr[l], arr[j]);
	return j;
}

void Quick_Sort(vector<int> arr, int l, int r){
	if(l>=r) return;
	int part = Partition(arr, l, r);
	Quick_Sort(arr, l, part-1);
	Quick_Sort(arr, part+1, r);
}

};

//Time Complexity:  O(NlogN)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
	