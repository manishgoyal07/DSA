//Problem:  189. Rotate Array

//-------------------------------------------------------------------------------------
//Code :  

class Solution{
public:

void rotate(vector<int>& nums, int k) {
int n = nums.size();
vector<int> temp;
for(auto i: nums) temp.push_back(i);
for(int i=0; i<n; i++){
	nums[(i+k)%n] = temp[i];
}        
}

};

//Time Complexity:  O(2N)
//Auxilary Space Complexity:  O(N)
//-------------------------------------------------------------------------------------
	