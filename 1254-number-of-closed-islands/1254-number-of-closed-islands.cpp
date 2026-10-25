class Solution {
public:

    void dfs(vector<vector<int>>& grid , int i, int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || grid[i][j]==1){
            return ;
        }

        grid[i][j]=1;

        dfs(grid ,i,j+1);
        dfs(grid ,i,j-1);
        dfs(grid ,i+1,j);
        dfs(grid ,i-1,j);
    }
    int closedIsland(vector<vector<int>>& grid) {

        for(int i=0;i<grid.size();i++){
            dfs(grid, i,0);
            dfs(grid ,i , grid[0].size()-1);
        }
        for(int i=0;i<grid[0].size();i++){
            dfs(grid, 0,i);
            dfs(grid , grid.size()-1,i);
        }

        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0){
                    ans++;
                    dfs(grid,i,j);
                }
            }
        }

        return ans;
    }
};