#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
 

int main() {
   
    pid_t filho;

    filho = fork();

    if (filho == 0) {
        printf("Acabei filho\n");
        sleep(3);
        return 2;
        
    } else {
    	int wstatus;
    	wait(&wstatus);
    	printf("Filho acabou\n");
    	// Macro retorna 1 se o proegrama acabou normalmente 
    	printf("Terminou normal?: %d\n", WIFEXITED(wstatus));
    	printf("Valor de retorno: %d\n", WEXITSTATUS(wstatus));
        
        
    }
    return 0;
}
