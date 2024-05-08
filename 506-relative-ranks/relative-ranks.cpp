class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string>ans(score.size());
        vector<int>sortedscore = score;
        map<int, string>mp;
        for(int i = 0; i < sortedscore.size()-1; i++){
            for(int j = i+1; j < sortedscore.size(); j++){
                if(sortedscore[i] < sortedscore[j]) swap(sortedscore[i], sortedscore[j]);
            }
        }

        mp[sortedscore[0]] = "Gold Medal";
        if(sortedscore.size() > 1)
        mp[sortedscore[1]] = "Silver Medal";
        if(sortedscore.size() > 2)
        mp[sortedscore[2]] = "Bronze Medal";
        for(int i = 3; i < sortedscore.size(); i++)
        {
            mp[sortedscore[i]] = to_string(i +1);
        }

        for(int i = 0; i< score.size(); i++)
        {
            ans[i] = mp[score[i]];
        }
        return ans;
    }
};