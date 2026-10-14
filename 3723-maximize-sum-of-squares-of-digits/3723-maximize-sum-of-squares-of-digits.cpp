// class Solution {
// public:
//     string maxSumOfSquares(int num, int sum) {
//         int count_9 = 0;
//         string ans = "";
//         if(num * 9 < sum) {
//             return "";
//         }

//         while(sum > 9) {
//             sum -= 9;
//             count_9++;
//             num--;
//         }
//         while(count_9 > 0) {
//             ans += '9';
//             count_9--;
//         }
//         ans += to_string(sum);
//         num--;

//         while(num > 0) {
//             ans += '0';
//             num--;
//         }
//         return ans;
//     }
// };

class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > num * 9) return "";

        string ans = "";

        while (num > 0) {
            int digit = min(9, sum);
            ans += to_string(digit);
            sum -= digit;
            num--;
        }

        return ans;
    }
};
