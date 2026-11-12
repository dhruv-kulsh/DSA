class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
    
        long long sum = 0;
        int size = gifts.size();
        if(size == 1) return 1;

        priority_queue<int>pq;

        for(int i = 0; i < size; i++) pq.push(gifts[i]);

        while(k > 0){
            int top = pq.top();
            pq.pop();

            pq.push(sqrt(top));
            k--;
        }

        while(!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }
        return sum;
    
    }
};