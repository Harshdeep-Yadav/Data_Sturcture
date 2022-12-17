class Solution {
public:
    int missingNumber(vector<int>& nums) {
           int n = nums.size();
//         vector<int> arr(n+1, -1);
//         int ans;
        
//         for(int i = 0 ; i < n ; i++){
//             arr[nums[i]] = nums[i];
//         }
        
//         for(int i = 0 ; i < n ; i++){
//             if(arr[i] == -1){
//                 ans = i;
//                 break;
//             }
//         }                
//         return ans;
        int sum=(n*(n+1))/2;
        for(int i=0;i<=n-1;i++)
        {
            sum-=nums[i];
        }
        return sum;
    }
};