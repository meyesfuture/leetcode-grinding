class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int minutes = 0;
        queue<pair<int,int>> q;
        int fresh = 0;
        int m = grid.size();
        int n = grid[0].size();

        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
                else if(grid[i][j] == 1){
                    fresh++;
                }
            }
        }

        while(!q.empty()){
            int lvl = q.size();
            while(lvl--){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();

                if(i-1 >= 0 && grid[i-1][j] == 1){
                    grid[i-1][j] = 2;
                    fresh--;
                    q.push({i-1,j});
                }

                if(i +1 <= m -1 && grid[i+1][j] == 1){
                    grid[i+1][j] = 2;
                    fresh--;
                    q.push({i+1,j});
                }

                if(j-1 >= 0 && grid[i][j-1] == 1){
                    grid[i][j-1] = 2;
                    fresh--;
                    q.push({i,j-1});
                }

                if(j+1 <= n -1 && grid[i][j+1] == 1){
                    grid[i][j+1] = 2;
                    fresh--;
                    q.push({i,j+1});
                }
            }

            minutes++;
        }

        if(fresh>0){
            return -1;
        }
        if(minutes == 0){
            return 0;
        }

        return minutes - 1;
    }
};