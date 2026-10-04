class Solution {
public:
    int minimumFlips(int n) {
        string binary = "", revBinary = "";
        int rem, ans = 0;
        while(n >= 1) {
            rem = n % 2;
            n /= 2;
            binary = to_string(rem) + binary;
            revBinary = revBinary + to_string(rem);
        }

        for(int i = 0; i < binary.length(); i++) {
            if(binary[i] != revBinary[i]) {
                ans++;
            }
        }
        return ans;
    }
};