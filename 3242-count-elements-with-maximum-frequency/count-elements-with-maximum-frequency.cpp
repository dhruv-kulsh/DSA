class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        int high_freq = 0;
        for(int i = 0; i< nums.size(); i++)
        {
            mp[nums[i]]++;
            high_freq = max(high_freq, mp[nums[i]]);
        }

        int cnt = 0;
        for(int i = 0; i < mp.size(); i++){
            if(mp[i] == high_freq){
                cnt += mp[i];
            }
        }


        return cnt;
    }
};