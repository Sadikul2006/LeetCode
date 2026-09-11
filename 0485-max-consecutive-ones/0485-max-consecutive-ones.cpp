class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0, maxC = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == 1) {
                count++;
                maxC = max(maxC, count);
            }else {
                count = 0;
            }
        }
        return maxC;
    }
};