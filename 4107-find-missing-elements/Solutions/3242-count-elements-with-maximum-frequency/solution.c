int maxFrequencyElements(int* nums, int numsSize) {
    int i=0;
    int max=0;
    int total=0;
    int freq[101]={0};
    for(i=0;i<numsSize;i++){
        freq[nums[i]]++;
    }
    for(i=0;i<=100;i++){
        if(freq[i]>max){
            max=freq[i];
        }
    }
        for(int i = 0; i <= 100; i++) {
        if(freq[i] == max) {
            total += freq[i];
        }
    }
    return total;

}
