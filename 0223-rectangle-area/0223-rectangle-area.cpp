class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int a = abs(ax1 - ax2);
        int b = abs(ay1 - ay2);
        int c = abs(bx1 - bx2);
        int d = abs(by1 - by2);

        int ab = a * b;
        int cd = c * d;

        int total = ab + cd;

        int overlapWidth = max(0, min(ax2, bx2) - max(ax1, bx1));
        int overlapHeight = max(0, min(ay2, by2) - max(ay1, by1));

        int overlap = overlapWidth * overlapHeight;

        return total - overlap;
    }
};