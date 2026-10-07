class Solution {
public:
void dfs(vector<vector<char>>& grid, int r, int c ){
    int n = grid.size();
    int m = grid[0].size();
    if(r <0 || r>=n||c<0 ||c>=m || grid[r][c]=='0')return;

    grid[r][c]='0';
    dfs(grid,r+1, c);
     dfs(grid,r-1, c); 
     dfs(grid,r, c+1); 
     dfs(grid,r, c-1);
}
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int islands =0;
        for( int i=0;i<rows;i++){
            for( int j=0;j<cols;j++){
                if(grid[i][j]=='1'){
                    dfs(grid, i, j);
                    islands++;
                }
            }
        }
        return islands;
    }
};
