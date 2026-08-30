int missingNumber(int* nums, int numsSize) {
    int xor = 0;
    int i;

    for(i = 0; i < numsSize; i++){
        xor ^= i;
        xor ^= nums[i];
    }

    return xor ^ numsSize;
}
    
