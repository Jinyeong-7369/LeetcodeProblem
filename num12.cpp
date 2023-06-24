class Solution {
public:
    string intToRoman(int num) {
        char symbol[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int value[] = {1, 5, 10, 50, 100, 500, 1000};
        int exvalue[] = {4, 9, 40, 90, 400, 900};
        string exsymbol[] = {"IV", "IX", "XL", "XC", "CD", "CM"};

        int i = 6;
        int j = 5;
        string ret;
        while(num > 0)
        {
            if(num / value[i] > 0)
            {
                num -= value[i];
                ret += symbol[i];
            }
            else
            {
                if(value[i] > exvalue[j])
                {
                    i--;
                }
                if(num / exvalue[j] > 0)
                {
                    num -= exvalue[j];
                    ret += exsymbol[j];
                }
                else
                {
                    j--;
                }
            }
        }
        return ret;
    }
};