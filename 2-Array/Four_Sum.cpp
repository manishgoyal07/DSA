//Problem:  4Sum
//-------------------------------------------------------------------------------------
//Code :  

class Solution {
public:
vector<vector<int>> fourSum(vector<int> &num, int target)
{
    vector<vector<int>>ans;
    if(num.size() < 4)
    {
        return ans;
    }
    sort(num.begin(), num.end());
    for(int i = 0; i < num.size() - 3; i++)
    {
        long long target1 = target - num[i];
        for(int j = i + 1; j < num.size() - 2; j++)
        {
            long long target2 = target1 - num[j];
            int front = j + 1, back = num.size() - 1;
            while(front < back)
            {
                long long target3 = num[front] + num[back];
                if(target3 > target2)
                {
                    --back;
                }
                else if(target3 < target2)
                {
                    ++front;
                }
                else
                {
                     vector<int>res(4);
                    res[0] = num[i];
                    res[1] = num[j];
                    res[2] = num[front];
                    res[3] = num[back];
                    ans.push_back(res);
                    while(front < back && num[front] == res[2])
                    {
                        ++front;
                    }
                    while(front < back && num[back] == res[3])
                    {
                        --back;
                    }
                }
            }
            while(j + 1 < num.size() && num[j + 1] == num[j])
            {
                ++j;
            }
        }
        while(i + 1 < num.size() && num[i + 1] == num[i])
        {
            ++i;
        }
    }
    return ans;
}
};

//Time Complexity:  O(N^3)
//Auxilary Space Complexity:  O(k)
//-------------------------------------------------------------------------------------
	