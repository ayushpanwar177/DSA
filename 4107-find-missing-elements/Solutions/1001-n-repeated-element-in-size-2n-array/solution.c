int repeatedNTimes(int* nums, int numsSize) {
    for(int i=0;i<numsSize-1;i++)
        if(nums[i]==nums[i+1])
            return nums[i];

    for(int i=0;i<numsSize-2;i++)
        if(nums[i]==nums[i+2])
            return nums[i];

    for(int i=0;i<numsSize-3;i++)
        if(nums[i]==nums[i+3])
            return nums[i];

    return -1;
}
