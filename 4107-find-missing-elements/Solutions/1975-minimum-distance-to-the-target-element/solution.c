int getMinDistance(int* nums, int numsSize, int target, int start) {
    int i,dis=INT_MAX,dis1=INT_MAX;
    for(i=0;i<numsSize;i++){
        if(nums[i]==target){
            if(abs(i-start)<dis){
            dis=abs(i-start);
            }
        }
    }

     for(i=numsSize;i<=0;i--){
        if(nums[i]==target){
            if(abs(i-start)<dis1){
            dis1=abs(i-start);
        }
        }
     }
        if(dis<dis1)
        return dis;
        else 
        return dis1;

}
