class Solution {
    int getsum(vector<int>arr, int st, int end){
        int sum = 0;
        for(int j = st; j < end; j++){
            sum += arr[j];
        }
        return sum;
    }

public:
    int pivotIndex(vector<int>& nums) {
        int allsum = getsum(nums, 1, nums.size());
        if(allsum == 0)
        return 0;

        for(int i = 1; i < nums.size(); i++)
        {
            int leftsum = getsum(nums, 0, i);
            int rightsum = getsum(nums, i+1, nums.size());

            if(leftsum == rightsum){
                return i;
            }
        }
        return -1;
    }
};