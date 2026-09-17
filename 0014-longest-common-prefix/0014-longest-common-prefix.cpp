class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        string& firstStr = strs[0];

        for (int i = 0; i < firstStr.length(); ++i) {
            char targetChar = firstStr[i];

            for (int j = 1; j < strs.size(); ++j) {
                if (i == strs[j].length() || strs[j][i] != targetChar) {
                    return firstStr.substr(0, i);
                }
            }
        }

        return firstStr;
    }
};