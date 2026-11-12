class Solution {

    int calcAbs(int a, int b){
        if(a > b){
            return a-b;
        }
        else return b-a;
    }
public:
    int lastStoneWeight(vector<int>& stones) {

        priority_queue<int>pq;
        int size = stones.size();
        if(size ==1) return stones[0];

        for(int i =0; i < size; i++){
            pq.push(stones[i]);
        }

        while(pq.size() > 2){
            int top1 = pq.top();
            pq.pop();

            int top2 = pq.top();
            pq.pop();

            if(top1 != top2){
                int newWeight = calcAbs(top1, top2);
                pq.push(newWeight);
            }
        }

        if(pq.size() == 1) return pq.top();
        int top1 = pq.top();
        pq.pop();

        int top2 = pq.top();
        pq.pop();

        if(top1 != top2){
                int newWeight = calcAbs(top1, top2);
        return newWeight;
            }
            return 0;
    }
};