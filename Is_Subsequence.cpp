class Solution {
public:
    bool isSubsequence(string s, string t) {
        // ������ �߿��ϴ�
        int matchCount = 0;
        int basisIdx = 0;
        for (auto a : s)
        {
            for (int i = basisIdx; i < t.length(); i++)
            {
                if (a == t[i])
                {
                    matchCount++;
                    basisIdx = i + 1;
                    break;
                }
            }
        }
        return matchCount == s.length();
    }
};