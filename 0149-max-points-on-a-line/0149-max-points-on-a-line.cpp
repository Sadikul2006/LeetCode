class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n = points.size();
        int result = 0;

        if(n <= 2) return n;

        for(int i = 0; i < n; i++) {

            for(int j = i+1; j < n; j++) {

                int count = 2;

                // slope = dy/dx;
                int dy = points[j][0] - points[i][0]; // x2 - x1
                int dx = points[j][1] - points[i][1]; // y2 - y1

                for(int k = 0; k < n; k++) {

                    if(k != i && k != j) {
                        int dy_ = points[k][0] - points[i][0]; // x3 - x1
                        int dx_ = points[k][1] - points[i][1]; // y3 - y1

                        // dy/dx == dy_/dx_;
                        // => dx_*dy == dy_*dx;
                        if(dx_ * dy == dy_ * dx) {
                            count++;
                        }
                    }
                }
                result = max(count, result);
            }
        }
        return result;
    }
};