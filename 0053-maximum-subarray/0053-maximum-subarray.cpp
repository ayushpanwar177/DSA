class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum= 0, max1 = LONG_MIN;
        for(auto c : nums){
            sum+=c;
            if(sum>max1){
                max1=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return max1;
    }
};