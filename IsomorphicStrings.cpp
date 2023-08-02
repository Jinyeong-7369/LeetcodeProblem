class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> s2t;
        map<char, char> t2s;
        string tmpS(s);
        string tmpT(t);
        for (int i = 0; i < s.length(); i++)
        {
            t2s[t[i]] = s[i];
            s2t[s[i]] = t[i];
        }
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = s2t[s[i]];
            t[i] = t2s[t[i]];
        }
        return s == tmpT && t == tmpS;
    }
};