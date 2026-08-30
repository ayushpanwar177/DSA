int mirrorDistance(int n) {
    int rev=0;
    int last;
    int m;
    m=n;
    while(n!=0){
        last=n%10;
        rev=rev*10+last;
        n=n/10;
    }
return abs(m-rev);
}
