class Solution {
    vector<int> pascal(int numRows, int k){
        vector<int>temp;
        temp.push_back(1);
        int ans = 1;
        for(int i = 1; i< k; i++){
            ans = ans*(k-i);
            ans = ans/i;
            temp.push_back(ans);
        }
        return temp;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        vector<int>init = {1};
        ans.push_back(init);
        for(int k = 2; k<= numRows; k++){
            vector<int>temp = pascal(numRows, k);
            ans.push_back(temp);
        }
        return ans;
    }
};