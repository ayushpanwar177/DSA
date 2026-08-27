bool validDigit(int n, int x) {
    int count=0;
    int last;
    while(n>=10){
        last=n%10;
        if (last==x)
        count++;
         n=n/10;
    }
    if (n==x)
    return false;
    else if(count>0)
        return true;
        return false;
}
