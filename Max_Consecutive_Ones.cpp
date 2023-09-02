class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int ans = 0;
        for(auto a : nums)
        {
            if(a)
            {
                count++;
            }
            else
            {
                ans = max(count, ans);
                count = 0;
            }
        }
        ans = max(count, ans);
        return ans;
    }
};
