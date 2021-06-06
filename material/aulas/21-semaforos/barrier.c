#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

typedef struct{
    sem_t *sem_barrier;
}rdv_args;

double num_barrier = 0;

void *thread_barreira(void *arg) {
    printf("Antes da barreira\n");

    // TODO: implemente a barreira aqui

    printf("Depois da barreira\n");

    return NULL;
}

int main() {
    // TODO: crie 4 threads rodando o código acima
    
    // TODO: espere por elas

    return 0;
}
