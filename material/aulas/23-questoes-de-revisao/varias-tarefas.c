#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

typedef struct{
    sem_t *sem_DA, *sem_AD, *sem_CB, *sem_DB, *sem_CD, *sem_AC;
}rdv_args;

void *tarefaA(void *_arg) {
    rdv_args *args = _arg;
    // wait sem_DA
    sem_wait(args->sem_DA);
    printf("Tarefa A: Esta parte depende da primeira parte de D\n");
    // post sem_AC
    sem_post(args->sem_AC);

    // esse não tem wait
    printf("Tarefa A: Esta parte é independente\n");
    // post sem_AD
    sem_post(args->sem_AD);

    return NULL;
    
}

void *tarefaB(void *_arg) {
    rdv_args *args = _arg;
    // esse não tem wait
    printf("Tarefa B: eu sou independente\n");

    // wait sem_CB
    sem_wait(args->sem_CB);
    printf("Tarefa B: dependo da segunda parte de C!\n");

    // wait sem_DB
    sem_wait(args->sem_DB);
    printf("Tarefa B: Eu só posso aparecer depois que D terminar\n");

    return NULL;
}

void *tarefaC(void *_arg) {
    rdv_args *args = _arg;
    printf("Tarefa C: Esta parte é independente\n");
    //post sem_CD
    sem_post(args->sem_CD);

    // wait sem_AC
    sem_wait(args->sem_AC);
    printf("Tarefa C: Esta parte depende da primeira parte de A\n");
    // post sem_CB
    sem_post(args->sem_CB);

    return NULL;
}

void *tarefaD(void *_arg) {
    rdv_args *args = _arg;
    // wait sem_CD
    sem_wait(args->sem_CD);
    printf("Tarefa D: Esta parte depende da primeira parte de C\n");
    // post sem_DA
    sem_post(args->sem_DA);

    // wait sem_AD
    sem_wait(args->sem_AD);
    printf("Tarefa D: Eu só posso aparecer depois do fim de A.\n");
    // post sem_DB
    sem_post(args->sem_DB);

    return NULL;

}

int main() {
    /* TODO: criar threads aqui */
    /* TODO: criar semáforos/mutexes aqui */
    /* TODO: esperar threads aqui */
    pthread_t t1, t2, t3, t4;

    sem_t sem_DA, sem_AD, sem_CB, sem_DB, sem_CD, sem_AC;
    sem_init(&sem_DA, 0, 0);
    sem_init(&sem_AD, 0, 0);
    sem_init(&sem_CB, 0, 0);
    sem_init(&sem_DB, 0, 0);
    sem_init(&sem_CD, 0, 0);
    sem_init(&sem_AC, 0, 0);
    
    rdv_args a ={.sem_DA = &sem_DA, .sem_AD=&sem_AD, .sem_CB=&sem_CB, .sem_DB=&sem_DB, .sem_CD=&sem_CD, .sem_AC=&sem_AC};

    pthread_create(&t1, NULL, tarefaA, &a);
    pthread_create(&t2, NULL, tarefaB, &a);
    pthread_create(&t3, NULL, tarefaC, &a);
    pthread_create(&t4, NULL, tarefaD, &a);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);
    pthread_join(t4, NULL);

    sem_destroy(&sem_DA);
    sem_destroy(&sem_AD);
    sem_destroy(&sem_CB);
    sem_destroy(&sem_DB);
    sem_destroy(&sem_CD);
    sem_destroy(&sem_AC);

    

    return 0;
}

/*
São 6 semáforos, todos inicializados com 0, sem_DA, sem_AD, sem_CB, sem_DB, sem_CD, sem_AC.
O sem_DA avisa para a primeira A que a primeira parte de D ja rodou.
O sem_AD avisa para a segunda parte de D que o A terminou
O sem_CB avisa para a segunda parte de B que a segunda parte de C rodou
O sem_DB avisa para a treceira parte de B que o D terminou
O sem_CD avisa para a primeira parte de D que a primeira parte de C ja rodou
O sem_AC avisa para a segunda parte de C que a primeira parte de A já rodou

*/