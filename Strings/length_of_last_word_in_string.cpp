class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int last=n-1;
        int count=0;
        for(int i=last;i>=0;i--)
        {
            if(s[i]!=' ')
                count++;
            if(s[i]==' '&&count>0)
                break;
        }
        return count;
    }
};
