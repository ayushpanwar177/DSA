int furthestDistanceFromOrigin(char* moves) {
    int i;
    int countl = 0, countr = 0, blank = 0;
    for(i = 0; moves[i] != '\0'; i++) {
        if(moves[i] == 'L')
            countl++;
        else if(moves[i] == 'R')
            countr++;
        else
            blank++;  
    }
    char ch;
    if(countl >= countr)
        ch = 'L';
    else
        ch = 'R';
    if(ch == 'L')
        countl += blank;
    else
        countr += blank;
    if(countl > countr)
        return countl - countr;
    else
        return countr - countl;
}
