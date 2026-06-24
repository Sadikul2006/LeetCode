class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> m;
        vector<int> ans;
        for (int i = 0; i < arr.size(); i++) {
            int frist = arr[i];
            int sec = target - frist;
            if(m.find(sec) != m.end()) {
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
            }
            m[frist] = i;            
        }
        return ans;
    } 
};