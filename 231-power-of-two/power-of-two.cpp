class Solution {
bool calc(int n, int s, int e)
{
        int m = s + (e-s)/2;
        while(s < e)
        {
            if(pow(2,m) == n){
                return true;
            }
            else if(pow(2,m) <n){
                return calc(n, m + 1, e);
            }
            else
                return calc(n, s, m);
        }
    return false;
}
public:
    bool isPowerOfTwo(int n) {
        int s = 0;
        int e = n;
        return calc(n, s, e);
    }
};