#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>

// esse porgrama roda infinito, nenhum processo acaba
// em um outro terminal envia:
//----------------------------------------------
// kill -s SIGILL 9141(exmeplo de pid do filho)
//----------------------------------------------
// ai o filho termina e o filho tbm

// Tem que ver qual sinal manda pq tem sinal que é ignorado
// tem um que para e continua então não termina

int main() {
    pid_t filho;

    filho = fork();
    
    if (filho == 0) {
        
        printf("Meu pid: %d\n", getpid());
        while(1);
    }

    int wst;
    wait(&wst);
    printf("EXITED %d \n"
        "SIGNALED %d \n"
        "TERMISIG %d \n", 
        WIFEXITED(wst),
        WIFSIGNALED(wst),
        WTERMSIG(wst),
        strsignal(WTERMSIG(wst)));

    return 0;
}
