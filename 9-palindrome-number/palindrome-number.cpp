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

    bool palindromecheck(vector<int>arr, int s, int e){
        if( s > e)
        return true;
        if(arr[s] != arr[e]){
                return false;
            }

            return palindromecheck(arr, s+1, e-1);
    }

public:
    bool isPalindrome(int x) {
        if(x < 0)
        return false;
        vector<int>arr = getarr(x);
        int s = 0;
        int e = arr.size()-1;
       return palindromecheck(arr, s, e);
    }
};