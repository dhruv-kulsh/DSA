class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(int i = 0; i< nums.size(); i++){
            mp[nums[i]]++;
        }

        int high_freq = 0;
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second > high_freq)
            {
                high_freq = it->second;
            }
        }
        cout<<high_freq<<endl;

        int cnt = 0;
        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second == high_freq)
            cnt += it->second;
        }


        return cnt;
    }
};