class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length(), c = 0, ans;
        int rem = n % 8;
        n = n - rem;
        while(n > 0) {
            n -= 8;
            c++;
        }
        ans = ((c * (c+1) / 2) * 8) + (rem * (c + 1));
        return ans;
    }
};