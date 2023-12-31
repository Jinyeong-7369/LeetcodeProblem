class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int start = nums[i];
            while (i < nums.size() - 1)
            {
                if (nums[i] + 1 != nums[i + 1]) break;
                i++;
            }
            int end = nums[i];
            ans.push_back(to_string(start));
            if (start == end) continue;
            ans.back() += "->" + to_string(end);
        }
        return ans;
    }
};