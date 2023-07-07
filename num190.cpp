class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t k = 2147483648;
        uint32_t result = 0;
        while (n)
        {
            result += (n % 2) * k;
            n /= 2;
            k /= 2;
        }
        return result;
    }
};