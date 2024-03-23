class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>nums;
        map<int, int>mp;
        for(int i = 0; i < nums2.size()-1; i++)
        {
            int ans_flag = -1;
            for(int j = i+1; j < nums2.size(); j++ )
            {
                if(nums2[j] > nums2[i]){
                    ans_flag = 1;
                    nums.push_back(nums2[j]);
                    break;
                }
            }
            if(ans_flag == -1){
                nums.push_back(-1);
            }
        }
        nums.push_back(-1);

        for(int i = 0; i < nums2.size(); i++){
            mp[nums2[i]] = nums[i];
        }
        vector<int>ans(nums1.size());
        for(int i = 0; i < nums1.size(); i++)
        {
            ans[i] = mp[nums1[i]];
            // ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};