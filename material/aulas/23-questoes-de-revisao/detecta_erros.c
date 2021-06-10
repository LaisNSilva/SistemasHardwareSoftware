#include <unistd.h>
#include <stdio.h>
#include <unistd.h>
#include <stdio.h>
#include <time.h>
#include <sys/types.h>
#include <sys/resource.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int wt;
    char prog[20];
    char *args[2];
    pid_t filho;

    while(1){
        if(filho == 0){
            printf("Iniciando\n");
            
            sprintf(prog, './%s', argv[1]);

            args[0] = prog;
            args[1] = NULL; 

            execvp(prog, args); 
            printf("EXEC FALHOU!\n");

            
        }
        if(WIFSIGNALED(wt)){
            if(WTERMSIG(wt) == SIGUSR1){
                printf("KILLED PROGRAM");
            }
        }
        wait(&wt);
        printf("[ERROR]: %d",  WEXITSTATUS(wt));
        raise(SIGKILL);
        
    }
}