// class Solution {
// public:
//     vector<vector<int>> ans;
//     void Solve(int i, vector<int>& arr, vector<int>& temp , int target)
//     {
//         if(target==0)
//         {
//             ans.push_back(temp);
//             return;
//         }
//         if(target<0)
//         {
//             return;
//         }
// //         when the size is overflow
//         if(i==arr.size())
//         {
//             return;
//         }
// //         when we are not taking any array element
//         Solve(i+1,arr,temp,target);
// //         if we take the array element 
//         temp.push_back(arr[i]);
//        Solve(i,arr,temp,target-arr[i]);
//         temp.pop_back();
//     }
//     vector<vector<int>> combinationSum(vector<int>& arr, int target) 
//     {
//        ans.clear();
//         vector<int> temp;
//         Solve(0,arr,temp,target);
//         return ans;
//     }
// };

class Solution {
private:
    void solve(int i, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int>&v){
        int n=arr.size();
        if(i==n)
        {
            if(target==0)
                ans.push_back(v);
            return;
        }
        // pick up an element
        if(arr[i]<=target){
        v.push_back(arr[i]);
        solve(i,target-arr[i],arr,ans,v);
        v.pop_back();
        }
        // not pick ans element
        solve(i+1,target,arr,ans,v);
        
    }
public :
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        solve(0,target,candidates,ans,v);
            return ans;
    }
};