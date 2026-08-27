 int isPrime(int num){
        if(num<=1)return 0;
        for(int i=2;i*i<=num;i++){
            if(num%i==0)
                return 0;
        }
        return 1;
        }
int sumOfPrimesInRange(int n) {
    int rev=0;
    int i=0;
    int temp=n;
    int sum=0;
    int last;
    while(temp>0){
        last=temp%10;
        rev=rev*10+last;
        temp=temp/10;
    }
    int start=(n<rev)? n:rev;
    int end=(n>rev)? n:rev;
    for(int i=start;i<=end;i++){
        if(isPrime(i)){
            sum+=i;
        }
    }
    
        
 return sum;
        
    
   
}
