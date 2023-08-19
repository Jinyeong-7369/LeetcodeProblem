class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> m;
        for (auto a : ransomNote)
        {
            m[a]++;
        }
        for (auto a : magazine)
        {
            if (m.count(a))
            {
                if (m[a] == 1)
                {
                    m.erase(a);
                }
                else
                {
                    m[a]--;
                }
            }
        }
        return m.empty();
    }
};