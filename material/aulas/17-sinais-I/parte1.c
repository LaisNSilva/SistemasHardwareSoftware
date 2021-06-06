#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>




int main() {
    pid_t filho;

    filho = fork();
    
    if (filho == 0) {
        int i = 1/0;
        printf("Divisão por zero!\n");
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

        // 1. o porgrama acabou normalmente? (não)
        // 2. o programa foi terminado por algum sinal? (sim)
        // 3. sinal 8 - traduz com strsignal!!
    return 0;
}
