bool judgeCircle(char* moves) {
   int x=0,y=0;
    for(int i=0;moves[i]!='\0';i++){
    if(moves[i]=='U')x++;
    else if(moves[i]=='D')x--;
    else if(moves[i]=='R')y++;
   else if(moves[i]=='L')y--;}
   if(x==0&&y==0)
    return true;
    else
    return false;
}

