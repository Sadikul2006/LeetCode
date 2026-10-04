class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int longest = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(') {
                st.push(i);
            } else {
                st.pop();
                if(st.empty()) {
                    st.push(i);
                } else {
                    longest = max(longest, i - st.top());
                }
            }
        }
        return longest;
    }
};


// class Solution {
// public:
//     int longestValidParentheses(string s) {
//         int n = s.length(), open = 0, c = 0, longest = 0;
//         bool is = false;
//         for(int i = 0; i < n; i++) {
//             if(s[i] == '(') {
//                 is = true;
//                 open++;
//             }else if(is && s[i] == ')') {
//                 if(open <= 0) {
//                     c = 0;
//                     open = 0;
//                 }else {
//                     c++;
//                     open--;
//                     longest = max(longest, c);
//                 }
//             }
//         }
//         return longest * 2;
//     }
// }; // Wrong Answer 160 / 235 testcases passed