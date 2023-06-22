// 여기에 이러한 값을 리턴하는 함수 signFunc(x)가 있다:
// 만약 x가 양수라면 1을 반환한다
// 만약 x가 음수라면 -1을 반환한다
// 만약 x가 0이라면 0을 반환한다

// 주어진 정수형 배열 nums에서 모든 숫자의 곱을 product라고 할 때 signFinc(product)의 값을 리턴해라 


class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n = nums.size();
        double product = 1;
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 0) return 0;
            else
            {
                if(nums[i] < 0) product *= -1;
            }
        }
        return product;
        
    }
};