class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1)
        return 1;
        int s = 1;
        int e = n-1;
        int startsum = 0;
        int endsum = n;
        while(s <= e)
        {
            if(startsum == endsum)
            {
                startsum = (s*(s+1))/2;
                endsum = endsum + e;
                s++;
                e--;
            }
            else if( startsum < endsum)
            {
                startsum = (s*(s+1))/2;
                s++;
            }
            else{
                endsum = endsum + e;
                e--;
            }
            cout<<"s "<<s<<" e"<<e<<endl;
            cout<<"startsum "<<startsum<<" enedsum"<<endsum<<endl;
        }
        if(startsum == endsum && (s-e  == 2))
        return s-1;
        else return -1;
    }
};