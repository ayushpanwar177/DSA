int hammingWeight(int n) {
    int num=n;
    int count=0;
    int arr[32];
    int i = 0;
     if (n == 0) {
        arr[i] = 0;
        i++;
    }
    while (n > 0) {
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }
     int binary[32];
    int k = 0;
    for (int j = i - 1; j >= 0; j--) {
        binary[k] = arr[j];
        k++;
    }
    for (int j = 0; j < k; j++) {
        if(binary[j]!=0)
        count++;}
        return count;
    
}
