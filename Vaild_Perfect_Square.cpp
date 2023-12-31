class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 1;
        int high = num;
        while (low <= high)
        {
            long mid = high + (low - high) / 2;
            if (mid * mid == num)
            {
                return true;
            }
            else if (mid * mid < num)
            {
                low = (int)mid + 1;
            }
            else
            {
                high = (int)mid - 1;
            }
        }
        return false;
    }
};