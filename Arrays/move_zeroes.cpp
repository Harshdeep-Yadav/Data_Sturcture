class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int lastindexatzerofind=0;
        for(int curr=0;i<n;i++)
        {
            swap(nums[lastindexatzerofind],nums[curr]);
        }
    }
};