class Solution {
public:
    vector<int> getRow(int rowIndex) {
      vector<int> ans{1},v{1};
        for(int i=1;i<=rowIndex;i++)
        {
            ans.push_back(1);
            for(int j=1;j<i;j++)
            {
                ans[j]=v[j]+v[j-1];
            }
            v=ans;
        }
        return ans;
    }
};