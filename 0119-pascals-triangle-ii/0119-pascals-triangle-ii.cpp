class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> result(rowIndex + 1, vector<int>(rowIndex + 1, 1));
        for(int i = 2; i <= rowIndex; i++) {
            int ans = 0;
            for(int j = 0; j < i - 1; j++) {
                ans = result[i-1][j] + result[i-1][j+1];
                result[i][j + 1] = ans;
            }
        }

        return result[rowIndex];
    }
};