class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size(), ans = 0;
        for(int i = 0; i < n; i++) {
            int num = nums[i], c = 0;
            while(num > 0) {
                num /= 10;
                c++;
            }
            if(c % 2 == 0) ans++;
        }
        return ans;
    }
};