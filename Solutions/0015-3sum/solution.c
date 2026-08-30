/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced.
 */
 void bubbleSort(int nums[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(nums[j]>nums[j+1]){
                int temp=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=temp;}
        }
    }
}
int** threeSum(int* nums,int numsSize,int* returnSize,int** returnColumnSizes){
    bubbleSort(nums,numsSize);
    int **ans=malloc(20000*sizeof(int*));
    *returnColumnSizes=
    malloc(20000*sizeof(int));
    *returnSize=0;
    for(int i=0;i<numsSize-2;i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        int left=i+1;
        int right=numsSize-1;
        while(left<right){
            int sum=
            nums[i]+nums[left]+nums[right];
            if(sum==0){
         ans[*returnSize]=malloc(3*sizeof(int));
        ans[*returnSize][0]=nums[i];
        ans[*returnSize][1]=nums[left];
          ans[*returnSize][2]=nums[right];
        (*returnColumnSizes)[*returnSize]=3;
       (*returnSize)++;
                left++;
                right--;
                while(left<right &&
                nums[left]==nums[left-1]){
                    left++;
                }
                while(left<right &&
                nums[right]==nums[right+1]){
                    right--;
              }
            }
            else if(sum<0)
                left++;
            else
              right--;
    }
    }
    return ans;
}
