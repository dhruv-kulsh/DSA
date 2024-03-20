class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size() == 1 || nums.size() == 2) return nums[0];
        sort(nums.begin(), nums.end());
        int half = nums.size()/2;
        for(int i = 0; i < nums.size()-1; i++)
        {
            int cnt = 1;
            while(nums[i] == nums[i+1])
            {
                cnt++;
                i++;
            }
            if(cnt > half) return nums[i];
            
        }
    return 0;
    }
};