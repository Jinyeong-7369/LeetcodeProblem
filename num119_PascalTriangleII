class Solution {
public:
    map<pair<int, int>, int> comMap;
    vector<int> getRow(int rowIndex) {
        for(int i = 0; i <= rowIndex; i++)
        {
            comMap[make_pair(i, 0)] = 1;
            comMap[make_pair(i, i)] = 1;
        }
        for(int n = 1; n <= rowIndex; n++)
        {
            for(int r = 1; r <= n; r++)
            {
                comMap[make_pair(n, r)] = comMap[make_pair(n-1, r-1)] + comMap[make_pair(n-1, r)];
            }
        }
        vector<int> result;
        for(int i = 0; i <= rowIndex; i++)
        {
            result.push_back(comMap[make_pair(rowIndex, i)]);
        }
        return result;
    }
};
