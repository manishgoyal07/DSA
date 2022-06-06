//1423. Maximum Points You Can Obtain from Cards
int maxScore(vector<int> &cardPoints, int k)
{
	int n = cardPoints.size();
	int total = 0;
	total = accumulate(cardPoints.begin(), cardPoints.end(), total);
	if (n == k)
	{
		return total;
	}

	int i = 0;
	int j = i;
	int window = 0;
	int maxi = INT_MIN;
	while (j < n)
	{
		window = window + cardPoints[j];
		if (j - i + 1 == (n - k))
		{
			maxi = max(maxi, total - window);
			window = window - cardPoints[i];
			i++;
		}

		j++;
	}

	return maxi;
}