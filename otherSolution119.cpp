class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<unsigned long> rowOfUnsignedLong(rowIndex + 1, 1);
        vector<int> rowOfInt(rowIndex + 1, 1);
        for(int i = 0; i < rowIndex; i++)
        {
            rowOfUnsignedLong[i+1] = rowOfUnsignedLong[i] * (rowIndex - i) / (i + 1);
            rowOfInt[i+1] = (int)rowOfUnsignedLong[i+1];
        }
        return rowOfInt;
    }
};
