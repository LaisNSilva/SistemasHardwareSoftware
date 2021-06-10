#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

// linha de compilação: 

/* declarar tarefas aqui e lançar no main */

typedef struct{
    sem_t *s1, *s2, *s3, *s4, *s5, *s6, *s7, *s8;
}rdv_args;

void *tarefa1(void *_arg) {
    rdv_args *args = _arg;
    
    printf("A\n");
    sem_post(args->s1);
    sem_wait(args->s2);
    printf("C\n");

    return NULL;

}

void *tarefa2(void *_arg) {
    rdv_args *args = _arg;
    
    printf("B\n");
    sem_post(args->s2);
    sem_post(args->s3);
    sem_post(args->s6);

    sem_wait(args->s1);
    sem_wait(args->s4);
    sem_wait(args->s5);
    printf("D\n");

    return NULL;

}

void *tarefa3(void *_arg) {
    rdv_args *args = _arg;
    
    printf("E\n");
    sem_post(args->s4);
    sem_post(args->s8);

    sem_wait(args->s3);
    sem_wait(args->s7);
    printf("F\n");

    return NULL;

}

void *tarefa4(void *_arg) {
    rdv_args *args = _arg;
    
    printf("G\n");
    sem_post(args->s5);
    sem_post(args->s7);

    sem_wait(args->s8);
    sem_wait(args->s6);
    printf("H\n");

    return NULL;

}


/* cada bloco na figura deverá ser representado por um print com sua letra */


int main() {

    pthread_t t1, t2, t3, t4;

    sem_t s1, s2, s3, s4, s5, s6, s7, s8;
    sem_init(&s1, 0, 0);
    sem_init(&s2, 0, 0);
    sem_init(&s3, 0, 0);
    sem_init(&s4, 0, 0);
    sem_init(&s5, 0, 0);
    sem_init(&s6, 0, 0);
    sem_init(&s7, 0, 0);
    sem_init(&s8, 0, 0);

    rdv_args a ={.s1 = &s1, .s2=&s2, .s3=&s3, .s4=&s4, .s5=&s5, .s6=&s6, .s7=&s7, .s8=&s8};

    pthread_create(&t1, NULL, tarefa1, &a);
    pthread_create(&t2, NULL, tarefa2, &a);
    pthread_create(&t3, NULL, tarefa3, &a);
    pthread_create(&t4, NULL, tarefa4, &a);

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);
    pthread_join(t4, NULL);

    sem_destroy(&s1);
    sem_destroy(&s2);
    sem_destroy(&s3);
    sem_destroy(&s4);
    sem_destroy(&s5);
    sem_destroy(&s6);
    sem_destroy(&s7);
    sem_destroy(&s8);


    return 0;
}


/*

s1 - inicia com 0 - A terminou
s2 - inicia com 0 - B terminou
s3 - inicia com 0 - B terminou
s4 - inicia com 0 - E terminou
s5 - inicia com 0 - G terminou
s6 - inicia com 0 - B terminou
s7 - inicia com 0 - G terminou
s8 - inicia com 0 - E terminou

*/