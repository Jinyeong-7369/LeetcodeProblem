class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        stack<bool> s;
        int bit_add = 32;
        while(n)
        {
            bit_add--;
            s.push(n % 2);
            n /= 2;
        }
        uint32_t result = 0;
        uint32_t k = 1;
        while(!s.empty())
        {
            result += k * (uint32_t)s.top();
            s.pop();
            k *= 2;
        }
        for(int i = 0; i < bit_add; i++)
        {
            result*=2;
        }
        return result;

    }
};