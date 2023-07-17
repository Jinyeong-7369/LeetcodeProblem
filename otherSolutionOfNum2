class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>mergeNums;
        int size1 = nums1.size();
        int size2 = nums2.size();
        int sizeOfMergeNums = size1 + size2;
        mergeNums.reserve(sizeOfMergeNums);
        int up1 = 0;
        int up2 = 0;
        for(int i = 0 ; i < sizeOfMergeNums; i++)
        {
            int push_num;
            if(up1 < size1 && up2 < size2)
            {
                if(nums1[up1] < nums2[up2]) push_num = nums1[up1++];
                else push_num = nums2[up2++];
            }
            else if(up1 < size1 && up2 >= size2) push_num = nums1[up1++];
            else if(up2 < size2 && up1 >= size1) push_num = nums2[up2++];
            
            mergeNums.push_back(push_num);
        }

        if(sizeOfMergeNums % 2 == 0) 
            return ((double)(mergeNums[sizeOfMergeNums/2] + mergeNums[sizeOfMergeNums/2 - 1])) / 2;
        else return mergeNums[sizeOfMergeNums/2];

    }
};
