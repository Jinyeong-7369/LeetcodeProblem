class Solution {
public:
    bool isPowerOfFour(int n) {
        int count = 0;
        while (n)
        {
            count += n % 4;
            n /= 4;
        }
        return count == 1;
    }
};