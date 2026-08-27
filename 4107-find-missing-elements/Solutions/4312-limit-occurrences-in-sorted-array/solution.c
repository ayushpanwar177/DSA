/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* limitOccurrences(int* nums, int numsSize, int k, int* returnSize) {
    int * ans=(int*)malloc(numsSize*sizeof(int));
    int idx=0;
    for(int i=0;i<numsSize;i++){
        int count=0;
        for(int j=0;j<=i;j++){
            if(nums[j]==nums[i])
                count++;}
            if(count<=k)
                ans[idx++]=nums[i];
        }
    
    *returnSize=idx;
    return ans;

    
}
