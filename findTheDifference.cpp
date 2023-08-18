class Solution {
public:
    char findTheDifference(string s, string t) {
        s += t;
        char c = 0;
        for (auto a : s)
        {
            c ^= a;
        }
        return c;
    }
};