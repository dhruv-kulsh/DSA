class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int i = 0;
        int sum = 0;
        while(i < nums.size())
        {
            sum += nums[i++];
            if(sum < 0) sum = 0;

            if(sum  > maxi)
            {
                maxi = max(sum, maxi);
            }
            
        }

        int cnt = 0;
        for(auto i : nums)
        {
            if(i >= 0) 
            {
                cnt++;
            }
        }

        if(cnt== 0) 
        {
            int maxi = INT_MIN;
            for(auto i: nums)
            {
                if(i > maxi) maxi = max(maxi, i);
            }
            return maxi;
        }
        return maxi;
    }
};