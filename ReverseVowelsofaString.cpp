class Solution {
public:
    string reverseVowels(string s) {
        int n = s.length();
        int up = 0;
        int down = n - 1;
        while (up <= down)
        {
            while (up <= down && !isVowel(s[up])) up++;
            while (up <= down && !isVowel(s[down])) down--;
            if (up > down) break;
            swapCh(s[up], s[down]);
            up++;
            down--;
        }
        return s;
    }
    bool isVowel(char c)
    {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    void swapCh(char& a, char& b)
    {
        char tmp = a;
        a = b;
        b = tmp;
    }
};