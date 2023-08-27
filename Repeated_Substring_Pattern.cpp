class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        // 문자를 추가해 가면서 이게 반복이 되는지 확인한다
        // 반복되는 단어의 길이는 무조건 s의 길이의 약수가 되야 한다
        int n = s.length();
        if(n == 1) return false;
        int k = 0;
        vector<int> divisor;
        for(int i = 1; i < n; i++)
        {
            if(n % i == 0)
            {
                divisor.push_back(i);
            } 
        }
        //가장 작은 약수 구했음
        bool ans = false;
        for(auto a : divisor)
        {
            ans = true;
            for(int i = 0; i < n - a; i++)
            {
                ans = ans && s[i] == s[i + a];
            }
            if(ans) return true;
        }
        return ans;
    }
};
