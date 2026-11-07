class Solution {
public:
    bool findWord(string a, string b) {
        for (int i = 0; i < b.length(); i++) {
            if (a.find(b[i]) == string::npos)
                return false;
        }
        return true;
    }

    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans = 0;

        for (int i = 0; i < words.size(); i++) {
            if (findWord(allowed, words[i]))
                ans++;
        }

        return ans;
    }
};