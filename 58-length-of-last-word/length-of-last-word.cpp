class Solution {
public:
    int lengthOfLastWord(string s) {
        stack<string>st;
        string temp = "";
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] != ' ')
            {
                temp += s[i];
            }
            else if(!temp.empty()){
                st.push(temp);
                temp = "";
            }
        }

        if(!temp.empty())
        st.push(temp);
        string top = st.top();
        // cout<<st.top()<<endl;
        return top.length();
    }
};