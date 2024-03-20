class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int half = nums.size()/2;
        map<int, int>mp;
        for(auto i : nums){
            mp[i]++;
        }
        for(auto i : mp){
            if(i.second > half) 
            return i.first;
        }
        return 0;
    }
};