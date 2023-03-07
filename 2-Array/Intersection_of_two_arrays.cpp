//Problem: Intersection of 2 arrays 
//-------------------------------------------------------------------------------------
//Code :  

class Solution {
public:
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		sort(nums1.begin(), nums1.end());
		sort(nums2.begin(), nums2.end());
		int i=0, j=0;
		vector<int>ans;
		while(i<nums1.size() && j<nums2.size()){
			if(nums1[i]<nums2[j])i++;
			else if(nums1[i]>nums2[j]) j++;
			else{
				if(ans.size()==0||ans.back()!=nums1[i])ans.push_back(nums1[i]);
				i++; j++;
			}
		}
		return ans;
	}
};

//Time Complexity:  O(2NlogN + 2N)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------