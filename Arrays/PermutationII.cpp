class Solution {
public:
    void solve(vector<int>nums,vector<vector<int>>&ans,int ind)
    {
        if(ind==nums.size())
        {
            ans.push_back(nums);
        }
        unordered_set<int>st;
        for(int i=ind;i<nums.size();i++)
        {
            if(st.find(nums[i])!=st.end()) continue;
            st.insert(nums[i]);
            swap(nums[ind],nums[i]);
            solve(nums,ans,ind+1);
            swap(nums[ind],nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>>ans;
        int ind=0;
        solve(nums,ans,ind);
        return ans;
    }
};