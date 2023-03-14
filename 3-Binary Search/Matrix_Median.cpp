//Problem:  Median of Row-wise Sorted Matrix
//-------------------------------------------------------------------------------------
//Code :  

class Solution {
public:
	int count(vector<vector<int>> mat, int n, int m, int val) {
		int count = 0;
		for (int i = 0; i < n; i++) {
			count += lower_bound(mat[i].begin(), mat[i].end(), val) - mat[i].begin();
		}
		return count;

	}
	int median(vector<vector<int>> &mat, int R, int C) {
		int l = INT_MAX, r = INT_MIN;
		for (int i = 0; i < R; i++) {
			l = min(l, mat[i][0]);
			r = max(r, mat[i][C - 1]);
		}
		while (l <= r) {
			int mid = l + (r - l) / 2;
			int cnt = count(mat, R, C, mid);
			if (cnt <= (R * C) / 2) l = mid + 1;
			else r = mid - 1;
		}
	}
};

//Time Complexity:  O(32*R*LogC)
//Auxilary Space Complexity:  O(1)
//-------------------------------------------------------------------------------------
