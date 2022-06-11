// Problem:  56. Merge Intervals
/*-------------------------------------------------------------------------------------*/
// Approach 1 :
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end()); //Sort the array First
    vector<vector<int>> ans;
    vector<int> temp(2);
    temp = intervals[0]; //Temp will store First pair of Intervals
    for (auto i : intervals) {
        if (temp[1] >= i[0]) { //If end of 1st interval > start of 2nd interval,
            temp[1] = max(temp[1], i[1]); //then store the max of ends of both intervals as end of new interval
        } else {
            ans.push_back(temp); //else store the interval in answer &
            temp = i;  //do the same for next pair of intervals
        }
    }
    ans.push_back(temp);  //If none of the conditions are true, just store the interval as it is in answer.
    return ans;
}
// Time Complexity:  O(N)
// Auxillary Space Complexity:  O(1)
/*-------------------------------------------------------------------------------------*/
