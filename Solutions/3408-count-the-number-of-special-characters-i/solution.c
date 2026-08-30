int numberOfSpecialChars(char* word) {
    int count=0;
    int small[26]={0};
    int cap[26]={0};
    for(int i=0 ;word[i]!='\0';i++){
         if(word[i]>='a'&& word[i]<='z'){
           small[word[i]-'a']=1;
            }
        else if(word[i]>='A'&& word[i]<='Z'){
        
            cap[word[i]-'A']=1;
    }
    }
    for(int i=0;i<26;i++){
        if(small[i]&&cap[i])
        count++;
    }
    return count;
}
