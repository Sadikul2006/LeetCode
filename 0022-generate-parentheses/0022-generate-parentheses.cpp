class Solution {
public:
    void helper(int n, int open, int close, string str, vector<string>& ans) {
        if(open == close && close == n) {
            ans.push_back(str);
            return;
        }

        if(open < n) {
            helper(n, open + 1, close, str + '(', ans);
        }

        if(close < open) {
            helper(n, open, close + 1, str + ')', ans);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        helper(n, 0, 0, "", ans);
        return ans;
    }
};