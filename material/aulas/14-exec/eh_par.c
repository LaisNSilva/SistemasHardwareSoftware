#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc<2){
        printf("Erro!\n");
        return -1;
    }
    int num1 = atoi(argv[1]); 
    if(num1>=0){
        return num1 % 2 == 0;
    }
    
    return -1;
    
}
