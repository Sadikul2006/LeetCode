class Solution {
public:
    int alternateDigitSum(int n) {
        int c = 0, digit, sumEven = 0, sumOdd = 0;
        while(n > 0) {
            digit = n % 10;
            n /= 10;
            c++;
            if(c % 2 == 0) {
                sumEven += digit;
            }else {
                sumOdd += digit;
            }
        }
        if(c % 2 == 0) {
            sumOdd = (-1 * sumOdd);
        }else {
            sumEven = (-1 * sumEven);
        }
        return sumEven + sumOdd;
    }
};