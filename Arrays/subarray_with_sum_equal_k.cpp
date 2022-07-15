int subarraySum(vector<int> &nums, int k) // brute force approuch with TC:- O(N^2)
{
    int count = 0;
    int sum = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        sum = nums[i];
        if (sum == k)
            count++;
        for (int j = i + 1; j < n; j++)
        {
            sum += nums[j];
            if (sum == k)
            {
                count++;
            }
        }
    }
    return count;
}

// optimised way to handle this question is using HashMap

int subarraySum(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    int n = nums.size();
    int count = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (sum == k)
        {
            count++;
        }
        if (m.find(sum - k) != m.end())
        {
            count = m[sum - k] + count;
        }
        if (m.find(sum) != m.end())
        {
            m[sum]++;
        }
        else
        {
            m[sum] = 1;
        }
    }
    return count;
}
