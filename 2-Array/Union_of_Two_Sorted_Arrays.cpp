//Problem:  Union of Two Sorted Arrays
//-------------------------------------------------------------------------------------
//Code :  

class Solution{
public:

	vector<int> findUnion(int arr1[], int arr2[], int n, int m)
	{
		vector<int> ans;
		int i=0, j=0;
		while(i<n && j<m){
			if(arr1[i]<=arr2[j]){
				if(ans.size()==0 || arr1[i]!=ans.back()){
					ans.push_back(arr1[i]);
				}
				i++;
			}
			else{ 
				if(ans.size()==0 || arr2[j]!=ans.back()){
					ans.push_back(arr2[j]);
				}
				j++;
			}
		}

		while(i<n){
			if(arr1[i]!=ans.back())
				ans.push_back(arr1[i]);
			i++; 
		} 

		while(j<m){
			if(arr2[j]!=ans.back())
				ans.push_back(arr2[j]);
			j++;
		} 
		return ans;
	}

};

//Time Complexity:  O(N+M)
//Auxilary Space Complexity:  O(N+M)
//-------------------------------------------------------------------------------------
