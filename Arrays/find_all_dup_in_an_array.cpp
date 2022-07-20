class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i : nums){
            m[i]++;
        }
        vector<int> ans;
        for(auto p : m){
             if(p.second==2)
                 ans.push_back(p.first);
        }
        return ans;
    }
}; 