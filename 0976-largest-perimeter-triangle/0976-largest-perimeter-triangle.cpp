class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        // int a = n-3, b = n-2, c = n-1;
        sort(nums.begin(), nums.end());
        while(n > 2) {
            if((nums[n-3] + nums[n-2]) > nums[n-1]) {
                return nums[n-3] + nums[n-2] + nums[n-1];
            }
            n--;
            // a--; b--; c--;
        }
        return 0;
    }
};