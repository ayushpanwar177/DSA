/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* scoreValidator(char** events, int eventsSize, int* returnSize) {
    int* ans = (int*)malloc(2 * sizeof(int));
    int score = 0;
    int counter = 0;
    for (int i = 0; i < eventsSize; i++) {
        if(counter==10)
        break;
        if (events[i][0] >= '0' && events[i][0] <= '6' &&
            events[i][1] == '\0') {
            score += events[i][0] - '0';
        } else if (strcmp(events[i], "W") == 0) {
            counter += 1;
        } else if (strcmp(events[i], "WD") == 0) {
            score += 1;
        } else if (strcmp(events[i], "NB") == 0) {
            score += 1;
        }
    }
    ans[0] = score;
    ans[1] = counter;
    *returnSize = 2;
    return ans;
}
