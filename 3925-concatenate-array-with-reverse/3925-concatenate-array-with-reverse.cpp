class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> revsArr = nums;
        reverse(revsArr.begin(), revsArr.end());
        nums.insert(nums.end(), revsArr.begin(), revsArr.end());
        return nums;
    }
};