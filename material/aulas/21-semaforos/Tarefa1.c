#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>


typedef struct{
    sem_t *s1, *s2;
}rdv_args;

void *aula20_tarefa1(void *_arg) {
    rdv_args *args = _arg;
    
    printf("A\n");
    sem_post(args->s1);
    sem_wait(args->s2);
    printf("C\n");

    return NULL;

}

void *aula20_tarefa2(void *_arg) {

    rdv_args *args = _arg;
    
    printf("B\n");
    sem_post(args->s2);
    sem_wait(args->s1);
    printf("D\n");

    return NULL;

}


int main(int argc, char *argv[]) {
    

   
    pthread_t t1, t2;

    sem_t s1, s2;
    sem_init(&s1, 0, 0);
    sem_init(&s2, 0, 0);
    
    
    rdv_args a ={.s1 = &s1, .s2=&s2};
    
    pthread_create(&t1, NULL, aula20_tarefa1, &a);
    pthread_create(&t2, NULL, aula20_tarefa2, &a);
    

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    sem_destroy(&s1);
    sem_destroy(&s2);

       

    return 0;
}
