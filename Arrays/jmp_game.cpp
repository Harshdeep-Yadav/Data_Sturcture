class Solution {
public:
    bool canJump(vector<int>& nums) {
        int lastind=nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(i+nums[i]>=lastind)
            {
                lastind=i;
            }
        }
        return lastind==0;
    }
};