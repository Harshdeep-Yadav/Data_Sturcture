class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n=nums.size();
        // int count=0;
        // for(int i=0;i<n-1;i++)
        // {
        //     for(int j=i+1;j<n-1;j++)
        //     {
        //         if(nums[j]+nums[j+1]==nums[i]+nums[i+1])
        //         {
        //             count++;
        //         }
        //     }
        // }
        // return count>=1; 
 
        unordered_map<int,int> mp;
        for(int i=1;i<n;i++)
        {
            int sum=nums[i]+nums[i-1];
            mp[sum]++;
            if(mp[sum]>=2) return true;
        }
        return false;
    }
};