class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        int ans = -1;
        set<int>st;
        for(auto i: nums1){
            st.insert(i);
        }
        for(auto i : nums2){
            if(st.count(i) == 1){
                return i;
            }
        }
    return ans;
    }
};