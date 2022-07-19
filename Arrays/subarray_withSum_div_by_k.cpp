// class Solution {
// public:
//     int subarraysDivByK(vector<int>& nums, int k) {
//         int n=nums.size();
//         if(n==0) return 0;
//         unordered_map<int,int> m; // {rem,indx}
//         int ans=0;
//         m.insert({0,-1});
//         int sum=0;
//         for(int i=0;i<n;i++)
//         {
//             sum+=nums[i];
            
//             int rem=sum%k;
            
//             if(rem<0) rem+=k;
            
//             if(m.find(rem)==m.end()) // not seen before
//                 m.insert({rem,i});
//             else
//                 ans=max(ans,i-m[rem]);
             
//         }
        
//         return ans;
//     }
// };

class Solution {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        int n = A.size();
        if(n==0) return 0;
        
        int i = 0, count = 0;
        int curr_sum = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;// this is done because initial cumulative sum = 0 and that sum%k will be equal to 0 always
        
        while(i<n)
        {
            curr_sum+= A[i++];
            int rem = curr_sum % K;
            if(rem<0) rem += K;
            
            if(mp.find(rem)!=mp.end())
                count+=mp[rem];
            
            mp[rem]++;
            
        }
        return count;
    }
};
