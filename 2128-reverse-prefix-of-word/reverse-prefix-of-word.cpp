class Solution {
public:
    string reversePrefix(string word, char ch) {
        bool flag = false;
        int st = 0;
        int i;
        for(i = 0; i < word.length(); i++)
        {
            if(word[i] == ch){
                flag = true;
                break;
            }
        }
        if(flag == false) return word;
        int end = i;
        while(st < end)
        {
            swap(word[st], word[end]);
            st++;
            end--;
        }
        return word;
    }
};