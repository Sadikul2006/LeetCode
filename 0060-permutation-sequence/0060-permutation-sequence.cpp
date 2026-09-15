class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> numbers;
        for(int i = 1; i <= n; i++) {
            numbers.push_back(i);
        }

        int fac = 1;
        for(int i = 1; i < n; i++) {
            fac *= i;
        }

        k--;

        string ans = "";

        for(int i = n; i > 0; i--) {

            int index = k / fac;

            ans += to_string(numbers[index]);

            numbers.erase(numbers.begin() + index);

            if(i > 1) {
                k = k % fac;
                fac = fac / (i - 1);
            }
        }

        return ans;
    }
};