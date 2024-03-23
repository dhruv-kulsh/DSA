class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (int i = 0; i < s.length(); i++) 
        {
            char ch = s[i];
            cout << "ch " << ch << endl;
            if (ch == '(' || ch == '{' || ch == '[') 
            {
                // cout << "In push " << ch << endl;
                st.push(ch);
            } 
            else 
            {
                if(!st.empty())
                    {
                    if ((ch == ')' && st.top() == '(') ||
                        (ch == '}' && st.top() == '{') ||
                        (ch == ']' && st.top() == '[')) {
                        st.pop();
                    } 
                    else 
                    {
                        return false;
                    }
                }
                else return false;
            }
        }

        if (st.empty())
            return true;
        return false;
    }
};