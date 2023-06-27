class Solution {
public:
    bool isPalindrome(int x) {
        // 1. 한자리 수면 무조건 충족
        // 2. 음수면 무조건 아님
        // 자리수 별로 나눈다
        // 끝 자리 첫 자리 비교 하기
        int dq[10];
        int front = 0;
        int back = -1;
        if(x < 0) return false;
        else if(x < 10) return true;
        else
        {
            while(x != 0)
            {
                back++;
                dq[back] = x % 10;
                x /= 10;
            }
            while(front < back)
            {  
                if(dq[front++] != dq[back--]) return false;
            }
        }
        return true;
    }
};
