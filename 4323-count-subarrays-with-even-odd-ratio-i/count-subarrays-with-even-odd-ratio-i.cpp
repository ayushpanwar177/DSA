class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int ratio=0;
        for(int i=0;i<nums.size();i++){
            int ecount=0;
        int ocount=0;
        for(int j=i;j<nums.size();j++){
            if(nums[j]%2==0)
            ecount++;
            else 
            ocount++;
            if(ocount>0){
                if((double)ecount/ocount<=(double)a/b)
                ratio++;
            }
        }
        }
        return ratio;

    }
};