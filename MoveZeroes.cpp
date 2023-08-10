class Solution {
public:
    int loopCount = 0;
    int zeroCount = 0;
    void moveZeroes(vector<int>& nums) {
        if(loopCount == 0)
        {
            for(int i = 0; i < nums.size(); i++)
            {
                zeroCount += nums[i] == 0;
            }
            loopCount = 1;
        }
        for(int i = 0; i < nums.size() - 1; i++)
        {
            if(nums[i] == 0 && nums[i + 1] != 0)
            {
                iter_swap(nums.begin() + i, nums.begin() + i + 1);
            }
        }
        // check
        for(int i = 0; i < zeroCount; i++)
        {
            if(nums[nums.size() - 1 - i] != 0)
            {
                return moveZeroes(nums);
            }
        }

    }
};