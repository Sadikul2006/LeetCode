class Solution {
public:
    int fib(int n) {
        if(n < 0) return 0;
        int a = 0, b = 1;
        for(int i = 0; i < n; i++) {
            int temp = a + b;
            a = b;
            b = temp;
        }
        return b;
    }
    int climbStairs(int n) {
        return fib(n-1) + fib(n-2);
    }
};