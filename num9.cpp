class Solution {
public:
    bool isPalindrome(int x);
};
bool Solution::isPalindrome(int x)
{
    string s;
    int tmp;
    int n;
    if(x < 0) return false;
    else if(x < 10) return true;
    else
    {
        s = to_string(x);
        n = s.length();
        for(int i = 0; i < n/2; i++)
        {
            if(s[i] != s[n - i - 1]) return false;
        }
        return true;
    }
}