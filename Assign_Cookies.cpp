class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int gIdx = 0, sIdx = 0;
        int count = 0;
        while(gIdx < g.size() && sIdx < s.size())
        {
            if(g[gIdx] - s[sIdx] <= 0)
            {
                count++;
                gIdx++;
                sIdx++;
            }
            else
            {
                sIdx++;
            }
        }
        return count;
    }
};
