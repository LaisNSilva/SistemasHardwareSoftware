#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

//gcc -Wall -pedantic -std=gnu99 -Og -o ex1 exemplo1-fork.c
int main () {
    pid_t f1, f2;
    int counter = 3;

    f1 = fork();
    if (f1 == 0){
        counter++;
    }

    f2 = fork();
    if (f2) {
        counter *= 2;
    }
    if (f1 && !f2) {
        counter--;
    }
    printf("f1 %d f2 %d counter %d\n", f1, f2, counter);

    if (f2) wait(NULL);


    printf("fim %d\n", getpid());

    return 0;
}

/*
PERGUNTA 1

f1 7525 f2 7526 counter 6
fim 7525

f1 7525 f2 0 counter 2
fim 7526

f1 0 f2 7527 counter 8
fim 7527

f1 0 f2 0 counter 4
fim 7524

*/

/*
PERGUNTA 2

Não é possivel, porque printou dois "fim...", 
sendo que antes deles, apenas um print mostrava f2=0.


*/

