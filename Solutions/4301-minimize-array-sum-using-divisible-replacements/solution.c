long long minArraySum(int* nums, int numsSize) {
    int i;
    int temp;
    long long  sum=0;
    int present[100001]={};
    int min=nums[0];
    for(i=0;i<numsSize;i++){
        present[nums[i]]=1;
        }
    
    for(int i=0;i<numsSize;i++){
        int temp=nums[i];
        for(int j=1;j*j<=nums[i];j++){
        if(nums[i]%j==0){
            if(present[j]&&j<temp)
                temp=j;
            if(present[nums[i]/j]&& nums[i]/j<temp)
                temp=nums[i]/j;
        }
        }
    
        sum=sum+temp;
}
    return sum;
}
