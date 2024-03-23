class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        stack<int> st;
        map<int, int> mp;
        for (int i = n - 1; i >= 0; i--) {
            int elem = nums2[i];
            while (!st.empty() && st.top() < elem)
                st.pop();
            if (st.empty()) {
                mp[elem] = -1;
            } else {
                int top = st.top();
                mp[elem] = top;
            }

            st.push(elem);
        }

        for (auto i : mp) {
            cout << i.first << " " << i.second<<endl;
        }
        
        vector<int> ans(nums1.size());
        for(int i = 0; i < nums1.size(); i++){
            ans[i] = mp[nums1[i]];
        }

        return ans;
    }
};