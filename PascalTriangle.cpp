class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> combination(numRows);
        for(int i = 0; i < numRows; i++)
        {
            combination[i].resize(i+1, 1);
            for(int j = 1; j < i && i > 1; j++)
            {
                combination[i][j] = combination[i - 1][j - 1] + combination[i - 1][j];
            }
        }
        
        return combination;
    }
};