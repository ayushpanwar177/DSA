int lengthOfLastWord(char* s) {
    int i = 0, len = 0;

    while(s[i] != '\0')   
        i++;

    for(i = i - 1; i >= 0; i--) {
        if(s[i] != ' ')
            len++;
        else if(len > 0)
            break;
    }

    return len;
}
