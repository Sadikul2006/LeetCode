class Solution {
public:
    int averageValue(vector<int>& nums) {
        int n = nums.size(), sum = 0, c = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] % 6 == 0 ) {
                sum += nums[i];
                c++;
            }
        }
        if(c == 0) c = 1;
        return sum / c;
    }
};