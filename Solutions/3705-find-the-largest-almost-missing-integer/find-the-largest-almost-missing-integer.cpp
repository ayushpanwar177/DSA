class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == n)
            return *max_element(nums.begin(), nums.end());
        if (k == 1) {
            int freq[51] = {0};
            for (int x : nums)
                freq[x]++;
            for (int x = 50; x >= 1; x--) {
                if (freq[x] == 1)
                    return x;
            }
            return -1;
        }
        int ans = -1;
        if (count(nums.begin(), nums.end(), nums[0]) == 1)
            ans = nums[0];
        if (count(nums.begin(), nums.end(), nums[n - 1]) == 1)
            ans = max(ans, nums[n - 1]);
        return ans;
    }
};