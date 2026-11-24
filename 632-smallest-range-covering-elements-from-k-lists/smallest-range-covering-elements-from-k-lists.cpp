class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<int> ans(2);

          priority_queue<
            pair<int, pair<int, int>>,
            vector<pair<int, pair<int, int>>>,
            greater<pair<int, pair<int, int>>>
        > pq;

        int rows = nums.size();
        int minimum = INT_MAX, maximum = INT_MIN;
        for (int i = 0; i < rows; i++) {
            pq.push({nums[i][0], {i, 0}});
            maximum = max(maximum, nums[i][0]);
        }
        minimum = pq.top().first;

        ans[0] = minimum;
        ans[1] = maximum;

        pair<int, pair<int, int>> temp;
        // int row, col;
        while (pq.size() == nums.size()) {
             temp = pq.top();
            int data = temp.first;
            int row = temp.second.first;
            int col = temp.second.second;
            pq.pop();

            if (col + 1 < nums[row].size()) { 
                col++;
                pq.push({nums[row][col], make_pair(row, col)});
                maximum = max(maximum, nums[row][col]);
                minimum = pq.top().first;

                if(maximum - minimum < ans[1] - ans[0]){
                    ans[1] = maximum;
                    ans[0] = minimum;
                }
            }
        }
        return ans;
    }
};