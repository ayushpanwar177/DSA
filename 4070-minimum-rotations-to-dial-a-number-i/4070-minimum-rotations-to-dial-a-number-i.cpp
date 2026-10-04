class Solution {
public:
    int minRotations(string s) {
        int ans = 0;
        int curr = 0;
        for (char d : s) {
            int next = d - '0';
            int diff = abs(curr - next);
            ans += min(diff, 10 - diff);
            curr = next;
        }
        return ans;
    }
};