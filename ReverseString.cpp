class Solution {
public:
    void reverseString(vector<char>& s) {
        int sizeOfs = s.size();
        char tmp;
        for (int i = 0; i < sizeOfs / 2; i++)
        {
            tmp = s[i];
            s[i] = s[sizeOfs - i - 1];
            s[sizeOfs - i - 1] = tmp;
        }
    }
};