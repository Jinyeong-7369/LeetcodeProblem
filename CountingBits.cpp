class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1);
        ans[0] = 0;
        int log2 = 0;
        for(int i = 1; i <= n; i++)
        {
            if(i == 1) ans[i] = 1;
            else if(isPowOf2(i))
            {
                ans[i] = 1;
                log2++;
            }
            else ans[i] = ans[i - pow(2,log2)] + 1;
        }
        return ans;
    }
    bool isPowOf2(int n)
    {
        if(n == 1) return true;
        while(n)
        {
            if(n / 2 == 1 && n % 2 == 0) return true;
            else if(n % 2 != 0) return false;
            else n /= 2;
        }
        return false;
    }
};