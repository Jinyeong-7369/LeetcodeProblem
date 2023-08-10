// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        // find left and right side
        int left = 1;
        int right = n;
        for (int i = 0; i < n; i++)
        {
            if (isBadVersion(left))
            {
                return left;
            }
            else if (isBadVersion(right))
            {
                break;
            }
            else
            {
                left++;
                right--;
            }
        }
        while (isBadVersion(right))
        {
            right--;
        }
        return right + 1;
    }
};