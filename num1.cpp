//문제 
// 주어진 정수형의 배열과 정수형 숫자 target에서, 더해서 target가 되는 숫자들의 인덱스를 반환해라

// 각각의 입력에 대해서 하나의 해답만 있다고 생각하면 되고, 하나의 요소를 두번 사용할수는 없다

//해답을 어떤 순서로 나열 해도 상관없다.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int n = nums.size();
        bool end = false;
        for(int i = 0; i < n; i ++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    result.push_back(i);
                    result.push_back(j);
                    end = true;
                    break;
                }
                
            }
            if(end == true)
            {
                break;
            }
        }
        return result;
    }
};