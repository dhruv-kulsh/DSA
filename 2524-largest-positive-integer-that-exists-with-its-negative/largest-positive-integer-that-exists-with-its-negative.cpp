class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int maxi = -1;
        map<int,int>mp;
        for(int i = 0; i <nums.size(); i++)
        {
            int no = nums[i];
            if(mp.find(-no) != mp.end()){
                maxi = max(abs(no), maxi);
            }
            else{
                mp[no]++;
            }
        }
        return maxi;
        
    }
};