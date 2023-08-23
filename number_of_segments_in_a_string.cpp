class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        bool havech = 0;
        for(int i = 0; i < s.length(); i++)
        {
            if(i > 0)
                if(s[i - 1] != s[i] && s[i] == ' ') count++;
                
            if(s[i - 1] != ' ') havech = 1;
        }
        return count + havech;
    }
};
