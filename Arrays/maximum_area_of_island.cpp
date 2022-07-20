class Solution {
    public :int maxAreaOfIsland(vector<vector<int>>& grid)  {
        int Max = 0;
        for(int i = 0 ;i<grid.size() ;i++)
        {
            for(int j = 0;j<grid[0].size();j++)
            {
                int count=1;
                if(grid[i][j] == 1)
                {
                     count_island(grid,i,j,count);
                     Max=max(Max,count);
                }
            }
        }
       return Max; 
    }
    // imp question
    
     int count_island(vector<vector<int>>& grid,int i,int j, int &count   ){
         // check if it if in the bounds
        if(i<0 || i>=grid.size() || j<0 || j>=grid[i].size())
        {
          return 0;
        }
        if(grid[i][j] == 0)return 0; //use less neighbour
        
        grid[i][j] = 0;
         
         // call the neighbour and seeif they are hrlpfull or not
        
        if( count_island(grid,i+1,j,count)) count++;//above
        if(count_island(grid,i-1,j,count)) count++;//down
        if( count_island(grid,i,j+1,count)) count++;// right
        if(count_island(grid,i,j-1,count)) count++;// left
         
         return 1;
    }
};