class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        bool flag =0;
        vector<int>ans;
        for(int i =0; i<nums.size()-1;i++)
        {
                if(flag)
                    break;
            
            for(int j=i+1;j<nums.size();j++)
            {
                
                if(nums[i] + nums[j] == target)
                {
                    flag =1;
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }    
        }
        
        return ans;
    }
};