class Solution {
public:
    int countLargestGroup(int n) {
        unordered_map<int, int> freq;
        int sum, digit, temp;
        for(int i = 1; i <= n; i++) {
            sum = 0;
            temp = i;
            while(temp > 0) {
                digit = temp % 10;
                temp /= 10;
                sum += digit;
            }
            freq[sum]++;
        }
        int maxGroup = 0, c = 0;

        for(auto it : freq) {
            if(it.second > maxGroup) {
                maxGroup = it.second;
                c = 0;
            }

            if(maxGroup == it.second) c++;
        }
        return c;
    }
};