class Solution {
public:
    bool checkGoodInteger(int n) {
        int digit, sqrSum = 0, dgtSum = 0;
        while(n > 0) {
            digit = n % 10;
            n /= 10;
            sqrSum += (digit * digit);
            dgtSum += digit;
        }
        
        if(sqrSum - dgtSum >= 50) {
            return true;
        }else {
            return false;
        }
    }
};