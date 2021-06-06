#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>

int main() {
    pid_t filho;

    filho = fork();
    
    if (filho == 0) {
        
        printf("Meu pid: %d\n", getpid());
        while(1);
    }

    int wst;
    sleep(10);
    kill(filho, SIGKILL); // terminar no proprio programa!
    
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