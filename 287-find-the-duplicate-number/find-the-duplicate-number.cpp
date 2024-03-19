class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int>mp;
        // mp[nums[0]]++;
        for(int i = 0; i< nums.size(); i++)
        {
            if(mp.find(nums[i]) == mp.end())
            {
                // cout<<"if "<<nums[i]<<endl;
                mp[nums[i]]++;
            }
            else{
                // cout<<"else  "<<nums[i]<<endl;
                return nums[i];
            }
        }
        return -1;
        
    }
};