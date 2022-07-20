class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        horizontalCuts.push_back(0); // this will add 0 in horizontalcuts array
        horizontalCuts.push_back(h); //for limitation of cake size ( add 5 in horizontalcuts)
        verticalCuts.push_back(0); //this will add 0 in verticalCuts array
        verticalCuts.push_back(w); // adds 4 in verticalCuts array
        
        // sorting modified array
        sort(horizontalCuts.begin(),horizontalCuts.end()); // [0,1,2,4,5]
        sort(verticalCuts.begin(),verticalCuts.end()); //[0,1,3,4]
        
        long l=0,b=0; 
        for(int i=1;i<horizontalCuts.size();i++) 
        {
            if(l<horizontalCuts[i]-horizontalCuts[i-1])
            {
                l=horizontalCuts[i]-horizontalCuts[i-1]; 
            }
        }
        
        for(int i=1;i<verticalCuts.size();i++)
        {
            if(b<verticalCuts[i]-verticalCuts[i-1])
            {
                b=verticalCuts[i]-verticalCuts[i-1];
            }
        }
        return (l*b)%(1000000007);
    }
};