/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findValidElements(int* nums, int numsSize, int* returnSize) {
    int *ans = (int *)malloc(numsSize * sizeof(int));
    int k = 0;

    for(int i = 0; i < numsSize; i++) {
        int left = 1;
        int right = 1;
        for(int j = 0; j < i; j++) {
            if(nums[j] >= nums[i]) {
                left = 0;
                break;
            }
        }
        for(int j = i + 1; j < numsSize; j++) {
            if(nums[j] >= nums[i]) {
                right = 0;
                break;
            }
        }
        if(left || right) {
            ans[k++] = nums[i];
        }
    }
    *returnSize = k;
    return ans;
}
