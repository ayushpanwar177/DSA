class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
         int minIndex = min_element(nums.begin(), nums.end()) - nums.begin();
         int maxIndex = max_element(nums.begin(), nums.end()) - nums.begin();
         int big=max(minIndex,maxIndex);
         int small=min(minIndex,maxIndex);
        int front = big + 1;
        int back = n - small;
        int both = small + 1 + n - big;
        return min({front, back, both});
    }
};