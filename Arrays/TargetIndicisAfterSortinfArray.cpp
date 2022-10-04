class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        if(target==0) return {};
         sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++)
        {
            if(nums[i]==target)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};