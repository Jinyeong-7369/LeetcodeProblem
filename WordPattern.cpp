class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream ss(s);
        string stringBuffer;
        vector<string> stringVec;

        while (getline(ss, stringBuffer, ' '))
        {
            stringVec.push_back(stringBuffer);
        }
        if (pattern.length() != stringVec.size()) return false;
        unordered_map<char, string> pat2s;
        unordered_map<string, char> s2pat;

        for (int i = 0; i < pattern.size(); i++)
        {
            char c = pattern[i];
            string word = stringVec[i];
            if (pat2s.count(c) == 0)
            {
                pat2s[c] = word;
                if (s2pat.count(word) == 0)
                {
                    s2pat[word] = c;
                }
                else
                {
                    return false;
                }
            }
            else if (pat2s[c] != word) return false;
        }
        return true;
    }
};