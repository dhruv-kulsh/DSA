class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int, int>mp;
        for(int i = 0; i < nums.size(); i++)
        {
            cout<<"New Iter"<<endl;
            int to_find = target - nums[i];
            if(mp.find(to_find) == mp.end()) // Not found
            {
                mp[nums[i]] = i;
            }
            // for(auto i : mp)
            // {
            //     cout<<"mp "<<i.first<<" "<<i.second<<endl;
            // }
            else // found
            {
                // return {mp[to_find], i};
                ans.push_back(i);
                ans.push_back(mp[to_find]);
                return ans;
            }
        }
        return {-1, -1};
    }
};