class Solution {
public:
    bool isPowerOfTwo(int n) {
        int s = 0;
        int e = n;
        int m = s + (e-s)/2;
        while(s < e){
            if(pow(2,m) == n){
                return true;
            }
            else if(pow(2,m) <n){
                s = m +1;
            }
            else
                e = m;

            m = s + (e-s)/2;
        }
        return false;
    }
};