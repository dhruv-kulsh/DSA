class Solution {
    void reverse(vector<char>& s, int st, int e){
        if(st > e){
            return;
        }
        swap(s[st], s[e]);
        reverse(s, st+1, e-1);
    }
public:
    void reverseString(vector<char>& s) {
        reverse(s, 0, s.size()-1);
    }
};