char* reverseVowels(char* s) {
    int i = 0, j = 0;
    char temp;
    while(s[j] != '\0'){
        j++;
    }
    j--;
    while(i < j){
        int vi = (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||     s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U');

        int vj = (s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||    s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U');

        if(vi && vj){
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++;
            j--;
        }  else if(vi && !vj){
            j--;
        }
        else if(!vi && vj){
            i++;
        }
        else{
            i++;
            j--;
        }
    }
    return s;
}
