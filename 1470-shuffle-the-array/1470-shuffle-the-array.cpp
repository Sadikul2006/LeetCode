class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int m = n;
        vector<int> result;
        for(int i = 0, j = n; i < m, j < nums.size(); i++, j++) {
            result.push_back(nums[i]);
            result.push_back(nums[j]);
        }
        return result;
    }
};