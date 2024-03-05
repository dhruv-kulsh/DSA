class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>ans;
        int rows = grid.size();
        int cols = grid[0].size();
        int total = rows*cols;
        vector<int>arr;
        for(int i  = 0;  i< rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                arr.push_back(grid[i][j]);
            }
        }
        sort(arr.begin(), arr.end());
        for(int i = 0; i < arr.size()-1; i++)
        {
            if(arr[i] == arr[i+1])
            {
                ans.push_back(arr[i]);
                break;
            }
        }

        set<int>temp;

        for(auto i : arr){
            temp.insert(i);
        }
        int ans2 = 0;

        for(auto i : temp)
        {
            ans2 = ans2 ^ i;
        }

        for(int i = 1; i <= total; i++){
            ans2 = ans2 ^ i;
        }

        ans.push_back(ans2);

        return ans;
    }
};