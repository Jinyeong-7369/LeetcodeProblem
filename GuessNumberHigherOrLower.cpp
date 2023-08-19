/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int high = n;
        int low = 1;
        int middle;
        while (low <= high)
        {
            middle = high + (low - high) / 2;
            int g = guess(middle);
            if (g == 0)
            {
                return middle;
            }
            else if (g == -1)
            {
                high = middle - 1;
            }
            else
            {
                low = middle + 1;
            }
        }
        return -1;
    }
};