class Solution {
    int calclength(int x) 
    {
        int len = 0;
        while (x != 0) {
            len++;
            x = x / 10;
        }
        return len;
    }

    int funcreverse(int x, long long ans, int len) 
    {
        if (len < 0 ) 
        {
            return ans;
        }
        if( ans < INT_MIN || ans > INT_MAX){
            return 0;
        }
        long long rem = x % 10;
        long long b = (pow(10, len));
        ans += rem * b;
        cout<<ans<<endl;
        return funcreverse(x /10, ans, len-1);
    }


public:
    int reverse(int x) {
        long long ans = 0;
        int len = calclength(x)-1;
        return funcreverse(x,ans, len);
    }
};