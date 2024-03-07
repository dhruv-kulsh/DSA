class Solution {
    vector<int> getarr(int x)
    {
        vector<int>arr;
        while(x)
        {
            int digit = x%10;
            x = x/10;
            arr.push_back(digit);
        }
        return arr;
    }
public:
    bool isPalindrome(int x) {
        if(x < 0)
        return false;
        vector<int>arr = getarr(x);
        for(auto i : arr){
            cout<<i<<endl;
        }
        int s = 0;
        int e = arr.size()-1;
        while(s < e){
            if(arr[s] != arr[e]){
                return false;
            }
            s++;
            e--;
        }
        return true;
    }
};