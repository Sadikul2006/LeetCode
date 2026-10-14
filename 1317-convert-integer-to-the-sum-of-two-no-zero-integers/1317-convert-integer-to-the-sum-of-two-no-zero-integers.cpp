
class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for (int a = 1; a < n; a++) {
            int b = n - a;
            int x = a, y = b;

            while (x > 0 && x % 10 != 0) x /= 10;
            while (y > 0 && y % 10 != 0) y /= 10;

            if (x == 0 && y == 0)
                return {a, b};
        }
        return {};
    }
};
