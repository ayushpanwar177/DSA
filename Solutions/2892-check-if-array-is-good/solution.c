bool isGood(int* nums, int numsSize) {
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = 0; j < numsSize - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }
    for (int k = 0; k < numsSize - 1; k++) {
        if(nums[k]!=k+1)
        return false;}
        if (nums[numsSize - 1] != numsSize-1)
            return false;
    return true;;
}
