class Solution {

    void mergeHalves(vector<int>& nums, int start, int end, int mid) {
        int left = start;
        int right = mid + 1;
        vector<int> temp;
        while (left <= mid && right <= end) {
            if (nums[left] < nums[right])
                temp.push_back(nums[left++]);
            else
                temp.push_back(nums[right++]);
        }
        while (left <= mid)
            temp.push_back(nums[left++]);
        while (right <= end)
            temp.push_back(nums[right++]);

        for (int i = 0; i < temp.size(); i++)
            nums[start + i] = temp[i];
    }

    void mergeSort(vector<int>& nums, int start, int end) {
        if (start >= end)
            return;

        int mid = start + (end - start) / 2;

        mergeSort(nums, start, mid);
        mergeSort(nums, mid + 1, end);

        mergeHalves(nums, start, end, mid);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        mergeSort(nums, start, end);
        return nums;
    }
};