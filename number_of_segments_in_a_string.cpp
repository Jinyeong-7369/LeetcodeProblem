class Solution {
public:
    int countSegments(string s) {
        bool haveCh = 0;
        int count = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == ' ')
            {
                if(haveCh) count++;
                haveCh = 0;
            }
            else
            {
                haveCh = 1;
            }
        }
        return count + haveCh;
    }
};
