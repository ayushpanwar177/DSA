/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countOppositeParity(int* nums, int numsSize, int* returnSize) {
    int* answer=(int*)malloc(numsSize*sizeof(int));
    *returnSize=numsSize;
    int count=0;
    
        for(int i=0;i<numsSize;i++){
            int count=0;
            for(int j=i+1;j<numsSize;j++){
                if(nums[i]%2==0){
                    if(nums[j]%2!=0){
                        count++;
                    }
                }
            else if(nums[i]%2!=0){
                 if(nums[j]%2==0){
                        count++;
                    }
                }
            }
            answer[i]=count;
            
        }
    return answer;
}
