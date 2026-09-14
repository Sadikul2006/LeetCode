// class Solution {
// public:
//     void check(vector<int>& nums, int a, int b, int c, int d, int &ans) {
//         nums.push_back(a);
//         nums.push_back(b);
//         nums.push_back(c);
//         nums.push_back(d);
//         sort(nums.begin(), nums.end());

//         ans = abs(nums[3] - nums[0]);
//     }

//     bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
//         int rec1_x_length = abs(rec1[0] - rec1[2]);
//         int rec1_y_length = abs(rec1[1] - rec1[3]);
//         int rec2_x_length = abs(rec2[0] - rec2[2]);
//         int rec2_y_length = abs(rec2[1] - rec2[3]);

//         vector<int> nums_x;
//         vector<int> nums_y;
//         int ans_x = 0, ans_y = 0;
//         check(nums_x, rec1[0], rec1[2], rec2[0], rec2[2], ans_x);
//         check(nums_y, rec1[1], rec1[3], rec2[1], rec2[3], ans_y);

//         if (ans_x < rec1_x_length + rec2_x_length &&
//             ans_y < rec1_y_length + rec2_y_length) {
//             return true;
//         } else {
//             return false;
//         }
//     }
// };

class Solution {
public:
    void check(vector<long long>& nums, long long a, long long b, long long c, long long d, long long &ans) {
        nums.push_back(a);
        nums.push_back(b);
        nums.push_back(c);
        nums.push_back(d);
        sort(nums.begin(), nums.end());

        ans = abs(nums[3] - nums[0]);
    }

    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        long long rec1_x_length = abs((long long)rec1[0] - rec1[2]);
        long long rec1_y_length = abs((long long)rec1[1] - rec1[3]);
        long long rec2_x_length = abs((long long)rec2[0] - rec2[2]);
        long long rec2_y_length = abs((long long)rec2[1] - rec2[3]);

        vector<long long> nums_x;
        vector<long long> nums_y;
        long long ans_x = 0, ans_y = 0;
        check(nums_x, rec1[0], rec1[2], rec2[0], rec2[2], ans_x);
        check(nums_y, rec1[1], rec1[3], rec2[1], rec2[3], ans_y);

        if (ans_x < rec1_x_length + rec2_x_length &&
            ans_y < rec1_y_length + rec2_y_length) {
            return true;
        } else {
            return false;
        }
    }
};