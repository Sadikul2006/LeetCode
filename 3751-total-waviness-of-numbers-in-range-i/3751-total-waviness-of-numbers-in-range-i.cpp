class Solution {
public:
    int vp(int num) {
        int waviness = 0, a, b, c;
        while(num >= 100) {
            a = num % 10;
            b = (num / 10) % 10;
            c = (num / 100) % 10;
            if((a > b && c > b) || (a < b && c < b)) waviness++;
            num /= 10;
        }
        return waviness;
    }
    int totalWaviness(int num1, int num2) {
        int ans = 0;
        for(int i = num1; i <= num2; i++) {
            ans += vp(i);
        }
        return ans;
    }
};