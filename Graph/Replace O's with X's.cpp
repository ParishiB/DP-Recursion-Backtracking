class Solution{
public:

    int dx[4] = {-1, 0, +1, 0};
    int dy[4] = {0, -1, 0, +1};
    
    void dfs(vector<vector<char>> &mat, vector<vector<bool>>&vis, int r, int c, int i, int j){
        vis[i][j] = true;
        
        for(int k = 0; k < 4; k++){
            
            int x = i + dx[k];
            int y = j + dy[k];
            
            if(x >= 0 && x < r && y >= 0 && y < c && mat[x][y] == 'O' && vis[x][y] == false){
                dfs(mat, vis, r, c, x, y);
            }
        }
    }
    
    
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
          vector<vector<bool>>vis(n, vector<bool>(m, false));
           for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if((i == 0 || i == n - 1 || j == 0 || j == m - 1) && mat[i][j] == 'O' && !vis[i][j]){
                    dfs(mat, vis, n, m, i, j);
                }
            }
         }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(mat[i][j] == 'O' && !vis[i][j])  mat[i][j] = 'X';
            }
        }
        
        return mat;
    }
};
