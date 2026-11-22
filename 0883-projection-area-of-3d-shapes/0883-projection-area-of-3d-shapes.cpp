
class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n = grid.size();
        int top = 0, front = 0, side = 0;

        for(int i = 0; i < n; i++) {
            int r = 0, c = 0;

            for(int j = 0; j < n; j++) {
                if(grid[i][j] > 0) {
                    top++;
                }

                r = max(r, grid[i][j]);
                c = max(c, grid[j][i]);
            }
            front += r;
            side += c;
        }
        return top + front + side;
    }
};
