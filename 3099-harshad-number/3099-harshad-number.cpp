class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int n = x, digit, sum = 0;
        while(n > 0) {
            digit = n % 10;
            sum += digit;
            n /= 10;
        }
        if(x % sum == 0) {
            return sum;
        }else {
            return -1;
        }
    }
};