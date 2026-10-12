class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int n = nums.size(), mx = INT_MIN, mn = INT_MAX, ans;
        for(int i = 0; i < n; i++) {
            mx = max(mx, nums[i]);
            mn = min(mn, nums[i]);
        }
        if(mn + (2 * k) >= mx ) {
            ans = 0;
        }else{
            mn += (2 * k); 
            ans = mx - mn;
        }
        return ans;
    }
};