class Solution {
public:
    string num1;
    string num2;
    string addStrings(string num1, string num2) {
        if (num1.length() < num2.length()) return addStrings(num2, num1);
        string sum;
        while (!num2.empty())
        {
            sum.push_back(num1.back() + num2.back() - '0');
            num1.pop_back();
            num2.pop_back();
        }
        while (!num1.empty())
        {
            sum.push_back(num1.back());
            num1.pop_back();
        }
        char carry = 0;
        for (int i = 0; i < sum.length(); i++)
        {
            sum[i] = sum[i] + carry;
            if (sum[i] >= 10 + '0')
            {
                carry = 1;
                sum[i] -= 10;
            }
            else carry = 0;
        }
        if (carry == 1)
        {
            sum.push_back('1');
        }
        reverse(sum.begin(), sum.end());
        return sum;
    }
};