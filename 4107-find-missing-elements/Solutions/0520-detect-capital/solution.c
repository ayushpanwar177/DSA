bool detectCapitalUse(char* word) {
    int count=0;
    int len=strlen(word);
    for(int i=0;i<len;i++){
        if(word[i]>= 'A' && word [i] <='Z'){
            count++;
        }
    }
    if(count==0)
    return true;
    else if(count==len)
    return true;
    else if((word[0]>= 'A' && word [0] <='Z') && count==1)
        return true;
        else
        return false;
}

