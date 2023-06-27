
class Solution {
public:
    int climbStairs(int n) {
        //n 층에 오르기 위해서는?
        //반드시 n - 1층이나  n - 2 층에 있어야 함
        // 3층이라고 가정
        // 반드시 2층이나 1층에 있어야 함 - 1
        // 2층에 가기 위해선 
        // 반드시 0층이나 1층에 있어야 함 - 2
        if(n == 0 || n == 1)
        {
            return 1;
        }
        else if(n == 2)
        {
            return 2;
        }
        else if(n == 3)
        {
            return 3;
        }
        else if(n == 4)
        {
            return 5;
        }
        else if(n == 5)
        {
            return 8;
        }
        else if(n < 0)
        {
            return 0;
        }
        else
        {
            return climbStairs(n - 1) + climbStairs(n - 2);
        }

    }
};
