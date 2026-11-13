class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int dcount= 1;
        int icount= 1;
        int dMax = 1;
        int iMax = 1;

        for(int i = 1; i < nums.size(); ++i) {
      
            if(nums[i - 1] > nums[i]) {
                dcount++;
                dMax = max(dMax, dcount);
            }
            else {
                dcount = 1;
            }

            if(nums[i - 1] < nums[i]) {
                icount++;
                iMax =max(iMax, icount);
            }
            else {
                icount= 1;
            }
        }

        return max(iMax, dMax);
    
    }
};