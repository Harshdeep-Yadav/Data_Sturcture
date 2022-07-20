// class Solution {
// public:
//     int jump(vector<int>& nums) 
//     {
//         int n=nums.size();
//         int currReach=0;
//         int jump=0;
//         int maxReach=0;
//         for(int i=0;i<=n-1;i++)
//         {
//             if((i+nums[i])>maxReach)
//             {
//                 maxReach=i+nums[i];  
//             }
//             if(i==currReach)
//             {
//                 jump++;
//                 currReach=maxReach;
//             }            
//         }
//         return jump;
//     }
// };

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size() - 1; 
        int curr = -1;
        int next = 0;
        int ans = 0;
        for (int i = 0; next < n; i++) {
            if (i > curr) 
             ans++,curr = next;
            next = max(next, nums[i] + i);
        };
        return ans;
    }
};

-