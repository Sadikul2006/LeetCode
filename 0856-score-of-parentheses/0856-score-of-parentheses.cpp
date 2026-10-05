class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans = 0, depth = 0, n = s.length();

        for(int i = 0; i < n; i++) {
            if(s[i] == '(') {
                depth++;
            } else {
                depth--;

                if(s[i - 1] == '(') {
                    ans += 1 << depth;
                }
            }
        }

        return ans;
    }
};