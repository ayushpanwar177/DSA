bool digitCount(char *num) {

    int count[10] = {0};

    for(int i = 0; num[i] != '\0'; i++)
        count[num[i] - '0']++;

    for(int i = 0; num[i] != '\0'; i++)
        if(count[i] != num[i] - '0')
            return false;
    return true;
}
