int sum(int n){
    int sum=0;
    while(n>0){
        sum=sum+n%10;
        n=n/10;
    }
    return sum;
}
int minElement(int* nums, int numsSize) {
    int min=INT_MAX;
    for(int i=0;i<numsSize;i++){
        if(sum(nums[i])<min)
        min=sum(nums[i]);
    }
    return min;
}
