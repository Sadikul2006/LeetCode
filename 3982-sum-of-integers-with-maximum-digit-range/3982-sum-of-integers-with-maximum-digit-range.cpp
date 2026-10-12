class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
        vector<int> digit(10, 0);
        for(int i = 0; i < nums.size(); i++) {
            int mx = 0, mn = 9, num = nums[i];
            while(num > 0) {
                int digit = num % 10;
                num /= 10;
                mx = max(mx, digit);
                mn = min(mn, digit);
            }
            int r = mx - mn;
            digit[r] += nums[i]; 
        }
        int ans = 0;
        for(int i = 0; i < digit.size(); i++) {
            if(digit[i] != 0) {
                ans = digit[i];
            }
        }
        return ans;
    }
};