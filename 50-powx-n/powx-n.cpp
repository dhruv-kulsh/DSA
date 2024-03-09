class Solution {
    double calc(double &x, int &n, int &a) {
        if(n == 1){
            return x;
        }
        if(n&1){
            x = x*a;
        }
        n = n >> 1;
        x = x*x;
        calc(x, n,a);
        return x;
    }

public:
    double myPow(double x, int n) 
    {
        int flag = 1;
        long long a = n;
        if(a < 0)
        {
            flag = -1;
            a = a*(-1);
        }
        if (a == 0)
            return 1;
            // int a = x;
            // return calc(x, n, a);
            double res = 1;
            while(a !=0){
                if(a&1){
                    res = res*x;
                }
                x = x*x;
                a = a >>1;
            }
            if(flag == -1){
                return double(1/res);
            }
            return res;
    }
};