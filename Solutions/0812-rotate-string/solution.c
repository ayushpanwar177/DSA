bool rotateString(char* s, char* goal) {
    int i=0;
    int len=strlen(s);
    for(i=0;i<len;i++){
       if(strcmp(s,goal)==0)return true;
         char first=s[0];
        for(int j=0;j<len;j++){
        s[j]=s[j+1];
        }
        s[len-1]=first;
       }
       
    
return false;
}
