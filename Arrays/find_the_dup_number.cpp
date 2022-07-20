// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) 
//     {
//        int n=nums.size();
//         sort(nums.begin(),nums.end());
//         for(int i=1;i<n;i++)
//         {
//             if(nums[i]==nums[i-1])
//                 return nums[i];
//         }
//         return -1;
//     }
// };

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        while (nums[0] != nums[nums[0]])
            swap(nums[0], nums[nums[0]]);
        return nums[0];
    }
};