class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        bool iszero = true;
        for (int i = 0; i < n; i++) {
          ans ^= nums[i];
            if (nums[i] != 0) {
             iszero = false;
            }
        }
        if (iszero) {
            return 0;
        }
        if (ans != 0) {
            return n;
        }
        return n - 1;
    }
};