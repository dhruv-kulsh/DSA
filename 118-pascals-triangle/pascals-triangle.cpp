class Solution {
    vector<vector<int>> pascal(int numRows, int k, vector<vector<int>>&result){
        if(k > numRows){
            return result;
        }
        vector<int>temp;
        temp.push_back(1);
        int ans = 1;
        for(int i = 1; i< k; i++){
            ans = ans*(k-i);
            ans = ans/i;
            temp.push_back(ans);
        }
        result.push_back(temp);
        return pascal(numRows, k+1, result);
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        vector<int>init = {1};
        result.push_back(init);
        int k = 2;
        vector<vector<int>>ans = pascal(numRows, k, result);
        return result;
    }
};