class Solution {
public:
    bool checkValidString(string s) {
        stack<int> extraOpen;
        stack<int> asetrick;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                extraOpen.push(i);
            } else if (s[i] == '*') {
                asetrick.push(i);
            } else {
                if (!extraOpen.empty()) {
                    extraOpen.pop();
                } else {
                    if (asetrick.empty()) {
                        return false;
                    } else {
                        asetrick.pop();
                    }
                }
            }
        }
        while (!extraOpen.empty()) {
            if (asetrick.empty()) {
                return false;
            }

            if (extraOpen.top() > asetrick.top()) {
                return false;
            }

            extraOpen.pop();
            asetrick.pop();
        }

        return true;
    }
};