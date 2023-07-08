class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        nums.push_back(target);
        int k = n / 2;
        int end = n - 1;
        for(int i = n; i > 1; i/=2)
        {
            int item = nums[k];
            if(target ==item)
            {
                return k;
            }
            else if(target > item)
            {

                k = (k + end) / 2;
            }
            else
            {
                end = k;
                k = k / 2;
            }
        }
        if(nums[k] > target) return k;
        else
        {
            while(nums[k] < target)
            {
                k++;
            }
            return k;
        }
    }
};
