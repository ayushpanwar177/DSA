class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int rightsum=0;

        for(int i=0;i<nums.size();i++){
            rightsum+=nums[i];
        }
        int leftsum=0;
        vector<int> result;
        for(int i=0;i<nums.size();i++){
            rightsum -= nums[i];
            result.push_back(abs(leftsum-rightsum));
            leftsum += nums[i];
        }
        return result;
    }
};
