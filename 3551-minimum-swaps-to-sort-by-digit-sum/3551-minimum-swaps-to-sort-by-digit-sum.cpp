class Solution {
public:
    int digitSum(int num) {
        int ans = 0;
        while (num > 0) {
            ans += num % 10;
            num /= 10;
        }
        return ans;
    }

    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<array<int, 3>> arr;
        for (int i = 0; i < n; i++) {
            arr.push_back({digitSum(nums[i]), nums[i], i});
        }

        sort(arr.begin(), arr.end());
        vector<int> pos(n);
        for (int i = 0; i < n; i++) {
            pos[arr[i][2]] = i;
        }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            while (pos[i] != i) {
                int j = pos[i];
                swap(arr[i], arr[j]);
                swap(pos[i], pos[arr[j][2]]);
                ans++;
            }
        }
        return ans;
    }
};

// Time Limit Exceeded
// 794 / 807 testcases passed
// class Solution {
// public:
//     int minSwaps(vector<int>& nums) {
//         vector<vector<int>> arr;
//         int n = nums.size(), ans = 0;
//         for (int i = 0; i < n; i++) {
//             arr.push_back({digitSum(nums[i]), nums[i]});
//         }

//         for (int i = 0; i < n - 1; i++) {
//             int min = i;

//             for (int j = i + 1; j < n; j++) {
//                 if (arr[j][0] < arr[min][0] ||
//                     (arr[j][0] == arr[min][0] && arr[j][1] < arr[min][1])) {
//                     min = j;
//                 }
//             }

//             if (i != min) {
//                 ans++;
//                 swap(arr[i], arr[min]);
//             }
//         }
//         return ans;
//     }
// };