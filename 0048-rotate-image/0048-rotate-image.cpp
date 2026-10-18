class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> ans;
        for(int i = 0;i<n;i++){
            ans.push_back({});
            for(int j=0;j<n;j++){
                ans[i].push_back(matrix[j][i]);
            }
            
        }

        for(int i=0;i<n;i++){
            reverse(ans[i].begin(),ans[i].end());
        }
        matrix = ans;
    }
};