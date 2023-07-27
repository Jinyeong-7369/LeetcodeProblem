class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> copyOfNums1(nums1);
        for (int i = 0, j = 0, k = 0; k < m + n; k++)
        {
            int num1 = (i < m) ? (copyOfNums1[i]) : (INT_MAX);
            int num2 = (j < n) ? (nums2[j]) : (INT_MAX);
            nums1[k] = min(num1, num2);
            if (num1 < num2) i++;
            else j++;
        }
    }
};