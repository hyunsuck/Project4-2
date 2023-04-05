#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 10
typedef struct {
    int i;
};
int main(void) {
    int i;
    srand(time(NULL));
    printf("-----Using array-----\n");
    for (i = 1; i <= 30; i++) {
        if (i % 2 == 0)
            printf("[%d] : push %d\n", i, rand() % 100 + 1);
        else if (i % 2 == 1)
            printf("[%d] : pop %d\n", i, rand() % 100 + 1);

    }
    return 0;
}