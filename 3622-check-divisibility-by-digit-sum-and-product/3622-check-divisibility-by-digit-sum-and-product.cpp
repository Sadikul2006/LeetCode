class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, product = 1, digit, temp = n;
        while(temp > 0) {
            digit = temp % 10;
            temp /= 10;
            sum += digit;
            product *= digit;
        }
        if(n % (sum + product) == 0) {
            return true;
        }
        return false;
    }
};