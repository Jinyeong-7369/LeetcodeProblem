class Solution {
public:
    vector<int> constructRectangle(int area) {
        unordered_map<int, int> m; 
        int minGap = INT_MAX;
        for(int i = 1; i <= sqrt(area); i++)
        {
            if(area % i == 0)
            {
                int gap = area / i - i;
                m[gap] = i;
                minGap = min(minGap, gap);
            }
        }

        vector<int> ans;
        int l = m[minGap];
        int w = area / m[minGap];
        if(l < w)
        {
            ans.push_back(w);
            ans.push_back(l);
        }
        else
        {
            ans.push_back(l);
            ans.push_back(w);
        }
        return ans;
    }
};
