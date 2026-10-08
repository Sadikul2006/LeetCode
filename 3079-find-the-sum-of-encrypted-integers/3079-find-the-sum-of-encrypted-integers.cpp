class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int ans = 0, digit;
        for(int i = 0; i < nums.size(); i++) {
            int n = nums[i], c = 0, larDigit = 0;
            while(n > 0) {
                digit = n % 10;
                larDigit = max(larDigit, digit);
                n /= 10;
                c++;
            }
            ans += ((pow(10, c) - 1) / 9 ) * larDigit;
        }
        return ans;
    }
};