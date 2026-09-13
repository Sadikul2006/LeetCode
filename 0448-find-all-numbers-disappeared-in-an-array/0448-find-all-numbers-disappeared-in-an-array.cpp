class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> result;
        int n = nums.size();

        for(int i = 1; i < n; i++) {
            if(nums[i] == nums[i-1]) continue;

            if(nums[i-1] + 1 < nums[i]) {
                for(int j = nums[i-1] + 1; j < nums[i]; j++) {
                    result.push_back(j);
                }
            }
        }

        if(nums[0] > 1) {
            for(int j = 1; j < nums[0]; j++) result.push_back(j);
        }
        if(nums[n-1] < n) {
            for(int j = nums[n-1] + 1; j <= n; j++) result.push_back(j);
        }

        return result;
    }
};
