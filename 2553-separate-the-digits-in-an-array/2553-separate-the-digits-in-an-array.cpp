class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        vector<int> stack;
        for (int i = 0; i < nums.size(); i++) {
            int n = nums[i];
            while (n > 0) {
                int digit = n % 10;
                stack.push_back(digit);
                n /= 10;
            }
            while (!stack.empty()) {
                ans.push_back(stack.back());
                stack.pop_back();
            }
        }
        return ans;
    }
};