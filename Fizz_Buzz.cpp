class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        
        for(int i = 1; i <= n; i++)
        {
            if(i % 3 != 0 && i % 5 != 0)
            {
                ans.push_back(to_string(i));
                continue;
            }
            string push;
            if(i % 3 == 0)
            {
                push += "Fizz";
            }
            if(i % 5 == 0)
            {
                push += "Buzz";
            }
            ans.push_back(push);
        }
        return ans;
    }
};
