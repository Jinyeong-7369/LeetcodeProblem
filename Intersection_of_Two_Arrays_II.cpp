class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int, int> map;
        for (auto a : nums1)
        {
            map[a]++;
        }
        for (auto a : nums2)
        {
            if (map[a] > 0)
            {
                ans.push_back(a);
                map[a]--;
            }
        }
        return ans;

    }
};