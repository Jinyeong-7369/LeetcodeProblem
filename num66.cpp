class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>result;
        int n = digits.size() - 1;
        int carry = 0;
        digits[n] += 1;
        for(int i = n; i >= 0; i--)
        {
            carry += digits[i];
            result.push_back(carry % 10);
            carry /= 10;
        }
        if(carry)
        {
            result.push_back(carry);
        }
        reverse(result.begin(), result.end());
        return result;
    }
};