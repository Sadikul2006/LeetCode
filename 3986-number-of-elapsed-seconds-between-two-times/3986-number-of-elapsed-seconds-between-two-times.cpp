class Solution {
public:
    int secondsBetweenTimes(string start, string end) {
        int h = stoi(end.substr(0, 2)) - stoi(start.substr(0, 2));
        int m = stoi(end.substr(3, 5)) - stoi(start.substr(3, 5));
        int s = stoi(end.substr(6, 8)) - stoi(start.substr(6, 8));

        return (h * 3600) + (m * 60) + s; 
    }
};