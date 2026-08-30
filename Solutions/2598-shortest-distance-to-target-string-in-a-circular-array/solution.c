int closestTarget(char** words, int wordsSize, char* target, int startIndex) {
   int minDist = wordsSize;
    for (int i = 0; i < wordsSize; i++) {
        if (strcmp(words[i], target) == 0) {
            int d = abs(i - startIndex);
           if (d < minDist)
        minDist = d;
        if (wordsSize - d < minDist)
                    minDist = wordsSize - d;  }
    }
    if (minDist == wordsSize)
    return -1;
return minDist;
}
