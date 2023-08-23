class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> my_map;
        for(auto a : s)
        {
            my_map[a]++;
        }
        int ans = 0;
        bool haveOdd = 0;
        for(auto a : s)
        {
            if(my_map.count(a))
            {
                ans += my_map[a] - (my_map[a] % 2 != 0);
                haveOdd = haveOdd | (my_map[a] % 2 != 0);
                my_map.erase(a);
            }
        }
        return ans + haveOdd;
    }
};
