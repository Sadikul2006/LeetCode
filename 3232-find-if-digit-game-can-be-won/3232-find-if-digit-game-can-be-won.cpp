class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size(), oneDgtSum = 0, twoDgtSum = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] > -1 && nums[i] < 10) {
                oneDgtSum += nums[i];
            }else {
                twoDgtSum += nums[i];
            }
        }
        return oneDgtSum != twoDgtSum;
    }
};