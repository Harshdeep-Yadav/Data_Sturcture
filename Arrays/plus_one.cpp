class solution{
    public:
    vector<int>plusOne(vector<int> &digits)
    {
        int n=digits.size();
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]!=9)
            {
                digits[i]+=1;
                return digits[i];
            }
            else{
                    digits[i]=0;
            }
        }
        if(digits[0]==0
        {
            vector<int> ans(n+1,0);
            ans[0]=1;
            return ans;
        })
        return digits;
    }
};