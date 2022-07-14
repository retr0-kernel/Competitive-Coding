char* getHint(char* secret, char* guess) {
    int len = strlen(secret), bulls = 0, cows = 0;
    int mapS[10] = {0}, mapG[10] = {0};
    for (int i = 0; i < len; i++) {
        if (secret[i] == guess[i]) {
            bulls++;
        } else {
            mapS[secret[i] - '0']++;
            mapG[guess[i] - '0']++;
        }
    }
    for (int i = 0; i < 10; i++) {
        cows += fmin(mapS[i], mapG[i]);
    }
    char* res = (char*) malloc(10 * sizeof(char));
    sprintf(res, "%dA%dB", bulls, cows);
    return res;
}
