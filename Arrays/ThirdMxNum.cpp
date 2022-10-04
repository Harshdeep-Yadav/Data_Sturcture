class Solution {
public:
    int thirdMax(vector<int>& nums) {
//         int n=nums.size();
//         int ans;
//         sort(nums.begin(),nums.end(),greater<int>());
//         if(n>=3)
//         {
           
//             for(int i=0;i<n;i++)
//             {
//                 if(nums[i]==nums[i+1])
//                  ans=nums[i+2];
//                 else
//                     ans=nums[i];
//             }
//         }
//         else
//             ans= *max_element(nums.begin(),nums.end());
//         return ans;
        sort(nums.begin(), nums.end());
        int count=1;
        for(int i=nums.size()-2; i>=0; i--){
            if(nums[i]<nums[i+1])                
                count++;
            if(count==3)    
                return nums[i];
        }
        return nums[nums.size()-1];
    }
};