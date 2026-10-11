class Solution {
public:
    int count(int num1, int num2, int c) {
        if(min(num1, num2) <= 0) {
            return c;
        }
        if(num1 < num2) {
            swap(num1, num2);
        }
        num1 -= num2;
        return count(num1, num2, c+1);
    }
    int countOperations(int num1, int num2) {
        return count(num1, num2, 0);
    }
};