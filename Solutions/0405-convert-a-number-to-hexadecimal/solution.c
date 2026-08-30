char* toHex(int num) {
    static char ans[9];
    char hex[] = "0123456789abcdef";
    if (num == 0) {
        ans[0] = '0';
        ans[1] = '\0';
        return ans;
    }
    unsigned int n = num;
    int i = 0;
    while (n) {
        ans[i++] = hex[n % 16];
        n /= 16;
    }
    ans[i] = '\0';
    int l = 0, r = i - 1;
    while (l < r) {
        char temp = ans[l];
        ans[l] = ans[r];
        ans[r] = temp;
        l++;
        r--;
    }
    return ans;
}
