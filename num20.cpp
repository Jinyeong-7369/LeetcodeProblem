class Solution {
public:
    bool isValid(string s) {
        string stack;
        for(char c : s)
        {
            switch(c)
            {
                case '(':
                stack.push_back('(');
                break;
                
                case '{':
                stack.push_back('{');
                break;
                
                case '[':
                stack.push_back('[');
                break;

                case ')':
                case '}':
                case ']':
                if(stack.back() == c - 1 || stack.back() == c - 2) stack.pop_back();
                else return false;
                break;
            }
        }
        if(stack != "") return false;

        return true;
    }
};