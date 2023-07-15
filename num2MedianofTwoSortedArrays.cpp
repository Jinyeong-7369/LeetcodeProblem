class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergeNums;
        mergeNums.reserve(nums1.size() + nums2.size());
        mergeNums.insert(mergeNums.end(), nums1.begin(), nums1.end());
        mergeNums.insert(mergeNums.end(), nums2.begin(), nums2.end());
        sort(mergeNums.begin(), mergeNums.end());
        int sizeOfMergeNums = mergeNums.size();
        if(sizeOfMergeNums%2 == 0)
        {
            return ((double)mergeNums[sizeOfMergeNums/2] + (double)mergeNums[sizeOfMergeNums/2 -1])/2;
        }
        else return mergeNums[sizeOfMergeNums/2];
    }
};
