class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());
        int before = nums[0];
        int count = 0;
        for(auto a : nums)
        {
            if(before != a) count++;
            if(count == 2) return a;
            before = a;
        }
        return nums[0];
    }
};
