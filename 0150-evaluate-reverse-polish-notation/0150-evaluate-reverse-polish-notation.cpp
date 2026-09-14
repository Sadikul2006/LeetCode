class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> stack;
        int a, b, ans;
        for(int i = 0; i < tokens.size(); i++) {
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                b = stack.back();
                stack.pop_back();
                a = stack.back();
                stack.pop_back();

                if(tokens[i] == "+") ans = a + b; 
                else if(tokens[i] == "-") ans = a - b; 
                else if(tokens[i] == "*") ans = a * b; 
                else  ans = a / b; 

                stack.push_back(ans);
            }else {
                if(tokens.size() == 1) {
                    ans = (stoi(tokens[0]));
                }
                int num = stoi(tokens[i]);
                stack.push_back(num);
            }

        }
        return ans;
    }
};