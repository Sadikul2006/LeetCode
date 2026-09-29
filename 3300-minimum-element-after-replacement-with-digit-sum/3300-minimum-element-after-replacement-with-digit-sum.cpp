class Solution {
public:
    int minElement(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i = 0; i < nums.size(); i++) {
            int n = nums[i], sum = 0;
            while(n > 0) {
                int digit = n % 10;
                sum += digit;
                n /= 10;
            }
            ans = min(sum, ans);
        }
        return ans;
    }
};