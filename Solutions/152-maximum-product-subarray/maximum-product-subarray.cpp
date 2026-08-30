class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix=1,suffix=1;
        int MAX=INT_MIN,max1=INT_MIN;
        for(int i=0;i<nums.size();i++){
            prefix*=nums[i];
            if(prefix>MAX)
            MAX=prefix;
            if(prefix==0)
            prefix=1;
        }
        for(int i=nums.size()-1 ;i>=0;i--){
             suffix*=nums[i];
              if(suffix>max1)
            max1=suffix;
         if(suffix==0)
            suffix=1;
    }
    return max(MAX,max1);
    }
};