class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        if(color == image[sr][sc] ){
            return image;
        }
        int m = image.size();
        int n = image[0].size();
        
        int org = image[sr][sc];
        queue<pair<int,int>> q;
        q.push({sr,sc});
        image[sr][sc] = color;

        while(!q.empty()){
            int i = q.front().first;
            int j = q.front().second;
            q.pop();


            if(i-1 >= 0 && image[i-1][j] == org){
                    image[i-1][j] = color;
                    q.push({i-1,j});
                }

                if(i +1 <= m -1 && image[i+1][j] == org){
                    image[i+1][j] = color;
                    q.push({i+1,j});
                }

                if(j-1 >= 0 && image[i][j-1] == org){
                    image[i][j-1] = color;
                    q.push({i,j-1});
                }

                if(j+1 <= n -1 && image[i][j+1] == org){
                    image[i][j+1] = color;
                    q.push({i,j+1});
                }


        }

        return image;
    }
};