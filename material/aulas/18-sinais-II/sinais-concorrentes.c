#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int status = 0;

void operacao_lenta() {
    sleep(10);
}


void sigint_handler(int num) {
    status += 1;
    printf("Chamou Ctrl+C; status=%d\n", status);
    operacao_lenta();
    printf("SIGINT: Vou usar status agora! status=%d\n", status);
}

void sigterm_handler(int num) {
    status += 1;
    printf("Recebi SIGTERM; status=%d\n", status);
    operacao_lenta();
    printf("SIGTERM: Vou usar status agora! status=%d\n", status);
}

int main() {
    

    /* TODO: registar SIGTERM aqui. */

    struct sigaction s_sigterm;
    s_sigterm.sa_handler = sigterm_handler; // aqui vai a função a ser executada
    sigemptyset(&s_sigterm.sa_mask);
    s_sigterm.sa_flags = 0;

    sigaction(SIGTERM, &s_sigterm, NULL);

    /* TODO: registar SIGINT aqui. */
    struct sigaction s_sigint;
    s_sigint.sa_handler = sigint_handler; // aqui vai a função a ser executada
    sigemptyset(&s_sigint.SIGTERM);
    s_sigint.sa_flags = 0;

    sigaction(SIGINT, &s_sigint, NULL);



    printf("Meu pid: %d\n", getpid());

    while(1) {
        sleep(1);
    }
    return 0;
}
