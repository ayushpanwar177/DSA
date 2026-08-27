int check(char *s, int l, int r){
    int cnt = 0;
    while(l >= 0 && s[r] != '\0' && s[l] == s[r])
    {
        cnt++;
        l--;
        r++;
    }
    return cnt;
}
int countSubstrings(char* s)
{
    int total = 0;
    for(int i = 0; s[i] != '\0'; i++){
        total = total + check(s, i, i);
        total = total + check(s, i, i + 1);
    }
    return total;
}
