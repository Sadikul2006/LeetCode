class Solution {
public:
    int splitNum(int num) {
        vector<int> digit;
        while(num > 0) {
            int dgt = num % 10;
            num /= 10;
            digit.push_back(dgt);
        }
        sort(digit.begin(), digit.end());
        int num1 = 0, num2 = 0;
        for(int i = 0; i < digit.size(); i++) {
            if(i % 2 == 0) {
                num1 = (num1 * 10) + digit[i];
            }else {
                num2 = (num2 * 10) + digit[i];
            }
        }
        return num1 + num2;
    }
};