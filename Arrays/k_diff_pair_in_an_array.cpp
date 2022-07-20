class Solution {
public:
  int findPairs(vector<int>& nums, int k) {
    if (k < 0) return 0;
    unordered_map<int, int> m;
    for (int n : nums) m[n]++;
    int cnt = 0;
    for (auto p : m) {
      if ((!k && p.second > 1)
        || (k && m.count(p.first + k))) ++cnt;
    }
    return cnt;
  }
};

// class Solution {
// public:
// 	int findPairs(vector<int>& nums, int k) {
// 		sort(nums.begin(),nums.end());
// 		int j=1;
// 		int i=0;
// 		int ans=0;
// 		while(i<nums.size() && j<nums.size()){
// 			if(nums[j]-nums[i]==k){
// 				ans++;
// 				j++;
// 				i++;
// 				while(j<nums.size() && nums[j]==nums[j-1]){
// 					j++;
// 				}
// 			}
// 			else if(nums[j]-nums[i]>k){
// 				i++;  
// 				if(j-i==0){
// 					j++;}
// 			}
// 			else{      
// 				j++;
// 			}         
// 		}
// 		return ans;

// 	}
// };
// class Solution {
// public:
//     int findPairs(vector<int>& nums, int k) {
//        int n=nums.size();
//        if(n==0) return n;
//        int ans=0;
//         for(int i=0;i<n;i++){
//             for(int j=1;j<n;j++){
//                  if(i==j or nums[j]-nums[i]<k){
//                     i++;
//                     j++; 
//                     ans++;
//                      while(nums[j]==nums[j-1]) {
//                          j++;
//                      }
//                  }
//                 else if(nums[i]-nums[j]>k){
//                     i++;
//                     if(j-i==0){
//                         j++;
//                     }
//                 }
                
//             }    
//         }
//         return ans;
//     }
// }; 

// // class Solution {
// // public:
// //     int findPairs(vector<int>& nums, int k) {
// //         unordered_map<int,int> a;
// //         for(int i:nums)
// //             a[i]++;
// //         int ans=0;
// //         for(auto x:a)
// //         {
// //             if(k==0)
// //             {    
// //                 if(x.second>1)
// //                 ans++;
// //             }
// //              else if(a.find(x.first+k)!=a.end())
// //                 ans++;
// //         }
        
// //         return ans;
// //     }
// // };
