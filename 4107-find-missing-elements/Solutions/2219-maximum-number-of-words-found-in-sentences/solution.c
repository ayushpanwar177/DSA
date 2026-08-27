int mostWordsFound(char** sentences, int sentencesSize) {
    int i,max=0;
    for(i=0;i<sentencesSize;i++){
        int count=1;
        for(int j=0;sentences[i][j]!='\0';j++){
            if(sentences[i][j]==' '){
                count++;
            }

        }
        if(count>max){
            max=count;
        }
    }
    return max;
}
