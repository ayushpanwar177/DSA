int maxDistance(int* colors, int colorsSize) {
    int maxDist = 0;
    for (int i = colorsSize - 1; i >= 0; i--) {
        if (colors[i] != colors[0]) {
            maxDist = i;
            break;  }
    }
    for (int i = 0; i < colorsSize; i++) {
        if (colors[i] != colors[colorsSize - 1]) {
            if ((colorsSize - 1 - i) > maxDist)
                maxDist = colorsSize - 1 - i;
            break;  }
    }
    return maxDist;
}
