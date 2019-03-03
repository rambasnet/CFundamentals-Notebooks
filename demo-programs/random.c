#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int * getRandomNumbers() {
    static int rands[5];
    // set the seed
    srand(time(NULL));
    for (int i=0; i< 5; i++) {
        rands[i] = rand() % 100; // number between 0 and 99
    }
    return rands;
}

int main() {
    int *rng;
    rng = getRandomNumbers();
    for(int i=0; i< 5; i++)
        printf("%d ", *(rng++)); //post-increment

    return 0;
}