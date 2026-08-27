bool isPalindrome(int x) {
    if(x<0)
    return false;
    int digit;
    long long reverse=0;
   int y=x;
    while(x!=0){
    digit=x%10;
    reverse=reverse*10+digit;
    x=x/10;
    }
    if(y==reverse)
   return true;
   else 
   return false;
}
