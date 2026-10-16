
class Solution {
public:
    int minMaxDifference(int num) {
        string s = to_string(num);
        string maxS = s, minS = s;

        char maxDigit = ' ';
        for (char c : s) {
            if (c != '9') {
                maxDigit = c;
                break;
            }
        }

        if (maxDigit != ' ') {
            for (char &c : maxS) {
                if (c == maxDigit) c = '9';
            }
        }

        char minDigit = s[0];
        for (char &c : minS) {
            if (c == minDigit) c = '0';
        }

        return stoi(maxS) - stoi(minS);
    }
};
