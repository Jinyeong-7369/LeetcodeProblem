class Solution {
public:
    int lengthOfLastWord(string s) {
        int endIdx = s.find_last_not_of(' ') + 1;
        s = s.substr(0, endIdx);
        int startIdx = s.find_last_of(' ');
        return endIdx - startIdx - 1;
    }
};