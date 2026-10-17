class Solution {
public:
    string multiply(string num1, string num2) {
        int l1 = num1.length(), l2 = num2.length();
        vector<int> arr(l1 + l2, 0);

        for (int i = l1 - 1; i >= 0; i--) {
            int n1 = num1[i] - '0';
            for (int j = l2 - 1; j >= 0; j--) {
                int n2 = num2[j] - '0';
                arr[i + j + 1] += n1 * n2;
            }
        }

        for (int i = arr.size() - 1; i > 0; i--) {
            arr[i - 1] += arr[i] / 10;
            arr[i] %= 10;
        }

        string ans = "";
        int i = 0;

        while (i < arr.size() && arr[i] == 0)
            i++;

        for (; i < arr.size(); i++)
            ans += char(arr[i] + '0');

        return ans.empty() ? "0" : ans;
    }
};