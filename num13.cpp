class Solution {
public:
    int romanToInt(string s) {
            string find_str[6] = {"IV", "IX", "XL", "XC", "CD", "CM"};
            int result = 0;
            int startIdx = 0;
            int findIdx = 0;
            for(int i = 0; i < 6; i++)
            {
                startIdx = 0;
                while(true)
                {
                    
                    findIdx = s.find(find_str[i], startIdx);
                    if(findIdx == -1) break;
                    s.erase(findIdx, find_str[i].length());
                    switch(i)
                    {
                    case 0:
                        result += 4;
                        break;
                    case 1:
                        result += 9;
                        break;
                    case 2:
                        result += 40;
                        break;
                    case 3:
                        result += 90;
                        break;
                    case 4:
                        result += 400;
                        break;
                    case 5:
                        result += 900;
                        break;
                    }
                    startIdx = findIdx + 1;
                }
            }
            for(char c : s)
            {
                switch(c)
                {
                case 'I':
                    result += 1;
                    break;
                case 'V':
                    result += 5;
                    break;
                case 'X':
                    result += 10;
                    break;
                case 'L':
                    result += 50;
                    break;
                case 'C':
                    result += 100;
                    break;
                case 'D':
                    result += 500;
                    break;
                case 'M':
                    result += 1000;
                    break;
                }
            }
            return result;
        }
    
};