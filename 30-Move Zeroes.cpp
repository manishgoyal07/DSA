// 283. Move Zeroes
void moveZeroes(vector<int> &nums)
{
	int i = 0, j = 1, n = nums.size();
	while (j < n)
	{
		if (nums[i] == 0 && nums[j] != 0)  // z, nz
		{                               
			swap(nums[i], nums[j]);     
			i++;
			j++;
		}
		else if (nums[i] == 0 && nums[j] == 0)  // z, z
		{
			j++;
		}
		else  // nz, z  &  nz, nz 
		{
			i++;
			j++;
		}
	}
}