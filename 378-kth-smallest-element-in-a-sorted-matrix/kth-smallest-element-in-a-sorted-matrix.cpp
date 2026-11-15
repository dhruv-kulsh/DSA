class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int>ans;
        int cnt = 0;
        for(int i =0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                ans.push_back(matrix[i][j]);
            }
        }

        sort(ans.begin(), ans.end());

        return ans[k-1];
    }
};