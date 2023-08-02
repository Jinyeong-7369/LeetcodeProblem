class Solution {
public:
    int titleToNumber(string columnTitle) {
        // columnNumber = (26^2)*(A+1) + (26^1)*(X+1) + (26^0)*(Y+1)  
        int ans = 0;
        for(int i = 0; i < columnTitle.length(); i++)
        {
            ans += pow(26, columnTitle.length() - i - 1) * (columnTitle[i] - 'A' + 1);
        }
        return ans;
    }
};