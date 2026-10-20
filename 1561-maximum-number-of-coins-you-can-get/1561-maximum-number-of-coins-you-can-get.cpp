class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int n = piles.size(), sum = 0;
        int i = n / 3;
        while(i < n ) {
            sum += piles[i];
            i += 2;
        }
        return sum;
    }
};