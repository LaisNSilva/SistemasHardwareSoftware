#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[]){
    if(argc<3){ // 3 porque o primeiro argumento é sempre o nome do programa
        printf("*Erro! \n");
        return -1;
    }
    double soma=0;
    double num1;
    for(int i =1; i<argc; i++){
        num1= atof(argv[i]);
        soma+=num1;

    }
    //double num1= atof(argv[1]); // atof retorna 0 se não for numero
    //double num2 = atof(argv[2]);
    printf("%lf \n", soma);

    return 0;

}
