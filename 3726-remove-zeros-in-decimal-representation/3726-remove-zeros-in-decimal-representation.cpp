class Solution {
public:
    long long removeZeros(long long n) {
        long long ans;
        int c = 0, digit = 0;
        while(n > 0) {
            digit = n % 10;
            if(digit != 0) { 
                ans += pow(10, c) * digit;
                c++;
            }
            n /= 10;
        }
        return ans;
    }
};