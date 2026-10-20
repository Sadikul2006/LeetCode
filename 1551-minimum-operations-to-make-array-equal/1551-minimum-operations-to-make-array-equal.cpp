class Solution {
public:
    int minOperations(int n) {
        int x = n / 2;
        return x * (n - x);
    }
};