//Problem:  Search an element in a 2D matrix	
//-------------------------------------------------------------------------------------
//Code :  

class Solution{
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int n = matrix.size(), m = matrix[0].size();
        int l=0, r= (n*m)-1;
        while(l<=r){
        	int mid = l+(r-l)/2;
        	if(matrix[mid/m][mid%m] == target){
        		return true;
        		break;
        }
        if(matrix[mid/m][mid%m] > target) r = mid-1;
        else l = mid+1;
    }
    return false;
}
};

//Time Complexity:  O((N*M)log(N*M))
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
	