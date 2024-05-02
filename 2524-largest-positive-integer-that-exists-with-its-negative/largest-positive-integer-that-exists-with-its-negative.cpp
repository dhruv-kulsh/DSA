class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int st = 0;
        int end = nums.size()-1;
        while( st < end && nums[st] < 0)
        {
            if(nums[st] + nums[end] == 0) return nums[end];
            if(nums[st] + nums[end] > 0){
                end--;
            }
            else{
                st++;
            }
        }
        return -1;
    }
};