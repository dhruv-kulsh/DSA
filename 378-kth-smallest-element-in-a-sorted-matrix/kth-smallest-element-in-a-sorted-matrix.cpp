class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int>ans;
        priority_queue<int>pq;
        int cnt = 0;
        for(int i =0; i < rows; i++){
            for(int j = 0; j < cols; j++){
                pq.push(matrix[i][j]);

                if(pq.size() > k) pq.pop();
            }
        }

        return pq.top();

    }
};