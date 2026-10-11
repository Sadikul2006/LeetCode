class Solution {
public:
    bool validDigit(int n, int x) {
        int digit, is = 0;
        while(n > 0) {
            digit = n % 10;
            n /= 10;
            if(digit == x) is = 1;
        }
        if(is == 1 && digit != x) {
            return true;
        }else {
            return false;
        }
    }
};