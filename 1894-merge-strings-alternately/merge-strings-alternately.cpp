class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0, j = 0, k=0;
        string word3 = "";
        while(i < word1.length() && j < word2.length()){
            word3.push_back(word1[i++]);
            word3.push_back(word2[j++]);
        }
        while(i < word1.length()){
            word3.push_back(word1[i++]);
        }
        while(i < word2.length()){
            word3.push_back(word2[i++]);
        }
        return word3;
    }
};