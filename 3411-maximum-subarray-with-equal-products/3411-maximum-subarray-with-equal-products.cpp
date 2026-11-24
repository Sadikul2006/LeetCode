
class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(int x : nums) {
            if(x == 1) ans = 1;
        }

        if(n >= 2) ans = 2;

        for(int i = 0; i < n; i++) {
            bool valid = true;

            for(int j = i + 1; j < n; j++) {
                for(int k = i; k < j; k++) {
                    if(gcd(nums[k], nums[j]) != 1) {
                        valid = false;
                        break;
                    }
                }

                if(!valid) break;

                if(j - i + 1 >= 3) {
                    ans = max(ans, j - i + 1);
                }
            }
        }

        return ans;
    }
};
