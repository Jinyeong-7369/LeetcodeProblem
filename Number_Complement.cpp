class Solution {
public:
    int findComplement(int num) {
        int count = 0;
        while(num >> count)
        {
            count++;
        }
        return ((long)(1 << count) - 1) ^ num;
    }
};
