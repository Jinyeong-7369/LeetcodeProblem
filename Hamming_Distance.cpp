class Solution {
public:
    int hammingDistance(int x, int y) {
        //0111
        //0001
        int z = x ^ y;
        int ans = 0;
        while(z)
        {
            if(z & 1)
            {
                ans++;
            }
            z /= 2;
        }
        return ans;
    }
};
