class Solution {
public:

    void reverse(vector<char>&s, int st, int e){
        if(st>e) return;

        swap(s[st++], s[e--]);
        reverse(s, st, e);
    }
    void reverseString(vector<char>& s) {
        int st = 0;
        int e = s.size()-1;
        reverse(s, st, e);
    }
};