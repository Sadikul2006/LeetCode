class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n = points.size(), time = 0, a = 0, b = 0;
        for(int i = 0; i < n-1; i++) {
            a = points[i][0] - points[i+1][0];
            b = points[i][1] - points[i+1][1];
            time += max(abs(a), abs(b)); 
        }
        return time;
    }
};