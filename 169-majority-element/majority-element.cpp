class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int candidate = 0;
        int i = 0;
        while(i < nums.size()){
            if(cnt == 0){
                candidate = nums[i];
            }
            if(nums[i] == candidate){
                cnt++;
            }
            else cnt--;

            i++;
        }
        return candidate;
    }
};