#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
#define N 10
=======
#define N 8
>>>>>>> upstream/master

int main(int argc, char *argv[]) {
    int *vetor = malloc(N * sizeof(int));
    int i;

    for (i = 0; i <= N; i++) {
        vetor[i] = i;
    }

    for (i = 0; i <= N; i++) {
        printf("Elemento %d: %d\n", i+1, vetor[i]);
    }


    return 0;
}
