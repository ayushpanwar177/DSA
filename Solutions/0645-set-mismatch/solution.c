/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    int freq[10001]={0};
    *returnSize=2;
    int* ans=(int*)malloc(*returnSize*sizeof(int));
    for(int i=0;i<numsSize;i++){
        freq[nums[i]]++;
    }
    for(int i=1;i<=numsSize;i++){
        if(freq[i]==2)
        ans[0]=i;
        else if(freq[i]==0)
        ans[1]=i;
}
return ans;
}
