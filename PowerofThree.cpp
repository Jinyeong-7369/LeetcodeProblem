class Solution {
public:
    bool isPowerOfThree(int n) {
        int count = 0;
        while (n)
        {
            count += n % 3;
            n /= 3;
        }
        return count == 1;
    }
};