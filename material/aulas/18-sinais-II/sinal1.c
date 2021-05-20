#include <stdio.h>
#include <unistd.h>
#include <signal.h> // sinal
#include <stdlib.h> // para o exit

int i=0;
void sig_handler(int num) {
    printf("Chamou Ctrl+C\n");
    i++;
    if(i>2){
        //exit(1)
        struct sigaction s2;
        s2.sa_handler = SIG_DFL; // aqui vai a função a ser executada
        sigemptyset(&s2.sa_mask);
        s2.sa_flags = 0;

        sigaction(SIGINT, &s2, NULL);
    }
}

int main() {
    /* TODO: registre a função sig_handler
     * como handler do sinal SIGINT
     */
    

    
    struct sigaction s;
    s.sa_handler = sig_handler; // aqui vai a função a ser executada
    sigemptyset(&s.sa_mask);
    s.sa_flags = 0;

    sigaction(SIGINT, &s, NULL);

    printf("Meu pid: %d\n", getpid());

    while(1) {
        sleep(1);
     
        
    }
    return 0;
}
