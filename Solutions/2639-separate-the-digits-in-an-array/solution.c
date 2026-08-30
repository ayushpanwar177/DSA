/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int j=0;
int*ans;
 void digit(int n){
    if(n==0)
    return;
    digit(n/10);
    ans[j]=n%10;
    j++;
 }
int* separateDigits(int* nums, int numsSize, int* returnSize) {
    j=0;
   ans=(int*)malloc(100000*sizeof(int));
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0)
        ans[j++]=0;
        else 
       digit(nums[i]);
    }
     *returnSize=j;
     return ans;
}
