int passwordStrength(char* password) {
    int lower[26]={0};
    int upper[26]={0};
    int digits[10]={0};
    int special[128]={0};
    int ans=0;
    for(int i=0;password[i]!='\0';i++){
        if(password[i]>='a'&& password[i]<='z'){
           lower[password[i]-'a']=1;
            }
        else if(password[i]>='A'&& password[i]<='Z'){
            upper[password[i]-'A']=1;
            }
        else if(password[i]>='0'&& password[i]<='9'){
                digits[password[i]-'0']=1;    }
        else if(password[i]=='!'|| password[i]=='@'||password[i]=='#'||password[i]=='$'){
             special[(int)password[i]]=1;
        }

    }
    for(int i=0;i<26;i++) ans+=lower[i]*1;
        for(int i=0;i<26;i++) ans+=upper[i]*2;
            for(int i=0;i<10;i++) ans+=digits[i]*3;
                for(int i=0;i<128;i++) ans+=special[i]*5;
    return ans;
}
