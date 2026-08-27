int minimumDistance(int* nums, int numsSize) {
   int dist;
   int min=INT_MAX;
   for(int i=0;i<numsSize;i++){
    for(int j=i+1;j<numsSize;j++){
        for(int k=j+1;k<numsSize;k++){
        if(nums[i]==nums[j]&&nums[j]==nums[k]){
             dist=abs(i-j)+abs(j-k)+abs(k-i);
             if(dist<min)
             min=dist;
        }
    }
   }
   }
   if(min==INT_MAX){
   return -1;}
   return min;
}
