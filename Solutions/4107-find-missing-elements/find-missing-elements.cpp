class Solution {
    public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> freq(101, 0);
        int mn = 101, mx = 0;
        for (int x : nums) {
            freq[x]++;
            mn = min(mn, x);
            mx = max(mx, x);
        }
        vector<int> ans;
        for (int i = mn + 1; i < mx; i++) {
            if (freq[i] == 0) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};