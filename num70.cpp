
class Solution {
public:
    int climbStairs(int n) {
        //n ���� ������ ���ؼ���?
        //�ݵ�� n - 1���̳�  n - 2 ���� �־�� ��
        // 3���̶�� ����
        // �ݵ�� 2���̳� 1���� �־�� �� - 1
        // 2���� ���� ���ؼ� 
        // �ݵ�� 0���̳� 1���� �־�� �� - 2
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
