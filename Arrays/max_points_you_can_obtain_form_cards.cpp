class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int sum=0;
        for(int i=0;i<k ;i++)
        {
            sum+=cardPoints[i];    
        }
        int maxSum=sum;
        for(int i=k-1;i>=0;i--)
        {
            sum-=cardPoints[i]; // excluding 
            sum+=cardPoints[n-k+i]; // including         7-3+1
            maxSum=max(sum,maxSum);
        }
        return maxSum;
    }
};