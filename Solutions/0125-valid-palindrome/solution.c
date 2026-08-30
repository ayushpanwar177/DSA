bool isPalindrome(char* s) {
    int i=0;
    int j=0;
    for(i=0;s[i]!='\0';i++){
        j++;}
        j--;
    for(i=0;i<j;){
         if (!isalnum(s[i])) { i++;
         continue;
    }
    if (!isalnum(s[j])){
        j--;
        continue;
    }
    if(tolower(s[i])!=tolower(s[j])){
        return false;
    }
    i++;
    j--;
}
return true;
}
