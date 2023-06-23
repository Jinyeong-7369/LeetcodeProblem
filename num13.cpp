class Solution {
public:
    int romanToInt(string s) {

        map<char, int> m;
        int num[] = {1, 5, 10, 50, 100, 500, 1000};
        char rnum[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int ret = 0;

        for(int i = 0; i < 7; i++)
        {
            m[rnum[i]] = num[i];
        }

        for(int i = 0; i < s.length(); i++)
        {
            if(i == s.length() - 1) 
            {
                ret += m[s[i]];
                break;
            }
            if(m[s[i]] < m[s[i + 1]]) ret -= m[s[i]];
            else
            {
                ret += m[s[i]];
            }
        }
        return ret;
    }
};
