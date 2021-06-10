#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

// com 2 valores é o pai - menor valor
// com 2 zeros é filho do filho - ultimo a ser criado- maior valor
// f1=0 ele é o filho f2=7527 ele tem um filho
// f1 7525 f2 0 counter 2 - filho f2 do pai 


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

/*

f1 7525 f2 7526 counter 6 --> fim 7524 
para o counter ser 6  tem que ser multiplicado por 2 
passa pelo if(f2) so que é o print do pai id menor


f1 7525 f2 0 counter 2 --> fim 7526
para o counter ser dois tem que subtrair 1
entrou no if(f1 && !f2) - se f1 foi criado e o filho for f2


f1 0 f2 7527 counter 8 --> fim 7525
ta no f1, para o counter de 8 tem que fazer +1 e depois x2
7525 - pq é o primeiro fork do pai

f1 0 f2 0 counter 4
filho do filho




*/

