class Solution {
public:
    int minMoves(vector<int>& nums) {
        int i = 0, n = nums.size(), maxNum = INT_MIN, ans = 0;
        while(i < n) {
            maxNum = max(nums[i], maxNum);
            i++;
        }

        for(i = 0; i < n; i++) {
            ans += maxNum - nums[i];
        }
        return ans;
    }
};