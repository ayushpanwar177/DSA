class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1.size());
       for(int i = 0 ; i < nums1.size(); i++){
             int find = 0;
             for(int j = 0 ; j < nums2.size() ; j++){
                if(nums1[i] == nums2[j]){
                     find = 1;
                 }
                 if(find && nums1[i] < nums2[j]){
                     ans[i] = nums2[j];
                     break;
                 }
           }
             if(ans[i] == 0) ans[i] = -1;
         }
        return ans;
    }
};