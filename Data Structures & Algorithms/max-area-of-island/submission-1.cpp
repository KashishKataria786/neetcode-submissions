class Solution {
public:

void dfs( vector<vector<int>>& grid, int n, int m, int row, int col, int & area){
    if( row <0 || row >=n || col <0 || col >=m)return;
    if(grid[row][col]==0)return;

    grid[row][col]= 0;
    area++;
    dfs(grid,n,m,row+1,col,area);
    dfs(grid,n,m,row,col+1,area);
    dfs(grid,n,m,row-1,col,area);
    dfs(grid,n,m,row,col-1,area);


}
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea =0;
        int n = grid.size();
        int m = grid[0].size();
        for( int row=0;row <n;row++){
            for( int col=0; col<m;col++){
                if(grid[row][col]==1){
                    int area =0;
                    dfs(grid, n,m,row,col,area);
                    maxArea = max(area, maxArea);
                }
            }
        }
        return maxArea;
    }
};
