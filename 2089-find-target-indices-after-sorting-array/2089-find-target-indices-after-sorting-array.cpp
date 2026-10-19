class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        vector<int> ans;
        int i = 0, j = nums.size() - 1;

        while (i <= j) {
            int mid = i + (j - i) / 2;

            if (nums[mid] == target) {
                int k = mid;

                while (k > 0 && nums[k - 1] == target)
                    k--;

                while (k < nums.size() && nums[k] == target) {
                    ans.push_back(k);
                    k++;
                }

                break;
            }
            else if (nums[mid] < target) {
                i = mid + 1;
            }
            else {
                j = mid - 1;
            }
        }

        return ans;
    }
};