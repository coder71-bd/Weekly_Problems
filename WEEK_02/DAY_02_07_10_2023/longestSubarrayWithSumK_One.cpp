// https://www.codingninjas.com/studio/problems/longest-subarray-with-sum-k_6682399

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    // Write your code here
    long long i = 0, j = 0, sum = 0;
    int mx = -1;
    while (j < a.size())
    {
        sum += a[j];
        while (sum > k)
        {
            sum -= a[i];
            i++;
        }
        if (sum == k)
        {
            int res = j - i + 1;
            mx = mx > res ? mx : res;
        }
        j++;
    }
    return mx;
}