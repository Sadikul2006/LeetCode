class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int> ans(n, 0);
        stack<int> st;
        int prevTime = 0;

        for (string log : logs) {
            stringstream ss(log);
            string id, type, time;

            getline(ss, id, ':');
            getline(ss, type, ':');
            getline(ss, time, ':');

            int idx = stoi(id);
            int t = stoi(time);

            if (type == "start") {
                if (!st.empty()) {
                    ans[st.top()] += t - prevTime;
                }

                st.push(idx);
                prevTime = t;
            }
            else {
                ans[st.top()] += t - prevTime + 1;

                st.pop();
                prevTime = t + 1;
            }
        }

        return ans;
    }
};