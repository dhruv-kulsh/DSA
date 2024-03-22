class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<int>st;
        for(auto i : s){
            int data = i;
            st.push(data);
        }
        s.clear();
        while(!st.empty()){
            int d = st.top();
            s.push_back(d);
            st.pop();
        }

    }
};