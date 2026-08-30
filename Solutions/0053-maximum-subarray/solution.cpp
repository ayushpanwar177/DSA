class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curMax = 0, max1 = INT_MIN;
        for(auto c : nums)
            curMax = max(c, curMax + c),
            max1 = max(max1, curMax);
        return max1;
    }
};
