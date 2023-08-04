class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> num2index;
        for(int i = 0; i < nums.size(); i++)
        {
            if(num2index.count(nums[i]) == 0)
            {
                num2index[nums[i]] = i;
            }
            else
            {
                if(i - num2index[nums[i]] <= k) return true;
                else num2index[nums[i]] = i;
            }
        }
        return false;
    }
};