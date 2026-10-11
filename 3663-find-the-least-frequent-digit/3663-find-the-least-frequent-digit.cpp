class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unordered_map<int, int> freq;
        int digit, minFreq = INT_MAX;
        while(n > 0) {
            digit = n % 10;
            n /= 10;
            freq[digit]++;
        }
        
        for(auto it : freq) {
            if(it.second < minFreq) {
                minFreq = it.second;
                digit = it.first;
            }
            if(it.second == minFreq) {
                digit = min(it.first, digit);
            }
        }
        return digit;
    }
};