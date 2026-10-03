class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxNum = INT_MIN;
        long long arrSum = 0;

        for(int num : nums) {
            maxNum = max(maxNum, num);
            arrSum += num;
        }

        return maxNum * nums.size() - arrSum;
    }
};