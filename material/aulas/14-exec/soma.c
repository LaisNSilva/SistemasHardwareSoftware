#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[]){
    if(argc<3){ // 3 porque o primeiro argumento é sempre o nome do programa
        printf("*Erro! \n");
        return -1;
    }
    double num1= atof(argv[1]); // atof retorna 0 se não for numero
    double num2 = atof(argv[2]);
    printf("%lf \n", num1+num2);

    return 0;

}
