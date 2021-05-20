#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int i1, i2;
    int ret;
} args_t;

void *tarefa_print_i(void *arg){
    args_t *i = (args_t *) arg;
    printf("i1: %d i2: %d \n", i->i1, i->i2);
    i->ret=i->i2+i->i1;
    
}


int main() {
    args_t *vi = malloc(4 * sizeof(args_t));
    pthread_t *tids = malloc(4 * sizeof(pthread_t));

    for(int i =0; i<4; i++){
        vi[i].i1=i*1;
        vi[i].i2=i*2;

        pthread_create(&tids[i], NULL, tarefa_print_i, &vi[i]);

    }

    for(int e =0; e<4; e++){
        pthread_join(tids[e], NULL);
        printf("Ret: %d\n", vi[e].ret);
    }

    free(tids);
    free(vi);

    



   return 0;
}
