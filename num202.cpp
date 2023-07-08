class Solution {
public:
    bool isHappy(int n) {
        //memorize first number
        //and if first number is repeated before 1
        //it is not happy number
        int first_sum = 0;
        while(n)
        {
            first_sum += pow(n % 10, 2);
            n /= 10;
        }
        if(first_sum == 1) return 1;
        n = first_sum;
        int sum = 0;
        while(sum != first_sum)
        {
            while(n)
            {
                sum += pow(n % 10, 2);
                n /= 10;
            }
            if(sum < 10) return sum == 1;
            n = sum;
            sum = 0;
        }
        return 0;
    }
};