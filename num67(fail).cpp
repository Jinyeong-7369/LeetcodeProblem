
class Solution {
public:
    string addBinary(string& a, string& b) {
        bool carry = 0;
        string result;
        bool lsb_a;
        bool lsb_b;
        bool xor_ab;
        bool sum;
        while(!a.empty() || !b.empty())
        {
            lsb_a = (a.back() == '1');
            lsb_b = (b.back() == '1');

            xor_ab = m_xor(lsb_a, lsb_b);
            sum = m_xor(xor_ab, carry);
            carry = (xor_ab && carry) || (lsb_a && lsb_b);
            if(sum)
            {
                result = "1" + result;
            }
            else
            {
                result = "0" + result;
            }
            if(!a.empty())
            {
                a.pop_back();
            }
            if(!b.empty())
            {
                b.pop_back();
            }
        }
        if(carry)
        {
            result = "1" + result;
        }

        return result;

    }
    bool m_xor(bool a, bool b)
    {
        return ((!a)&&b) || ((!b)&&a);
    }
};

