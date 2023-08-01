class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for (char c : s)
            if (isalpha(c) || isdigit(c)) a.push_back(tolower(c));

        string b(a);
        reverse(a.begin(), a.end());
        return a == b;
    }
};