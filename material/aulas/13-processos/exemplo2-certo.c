#include <sys/types.h> // para o wait
#include <sys/wait.h> // para o wait
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h> // para o sleep


int main() {
   
    pid_t filho;

    filho = fork();

    if (filho == 0) {
        printf("Acabei filho\n");
        sleep(3);
        return 2;
        
    } else {
    	int wstatus;
    	wait(&wstatus); //preenche wstatus pra mim
    	printf("Filho acabou\n");
    	// Macro retorna 1 se o proegrama acabou normalmente e 0 se crachou(divisão por 0por exemplo)
    	printf("Terminou normal?: %d\n", WIFEXITED(wstatus));
    	printf("Valor de retorno: %d\n", WEXITSTATUS(wstatus));
        
        
    }
    return 0;
}
