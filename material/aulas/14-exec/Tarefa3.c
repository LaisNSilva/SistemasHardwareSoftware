#include <unistd.h>
#include <sys/types.h>

int main(){

    int num, ret;
    do{
        scanf("%d", &num);

        if(fork()==0){
            char *args[]=("./eh_par", NULL);
            char int_to_str[20];
            sprintf(int_to_str, "%d", num);
            args[1]=int_to_str;

            execvp("./eh_par", args);
            printf("EXEC FALHOU!");


        }
        int wst;
        wait(&wst);
        if(WIFEXITED(wst)){
            ret=(char) WEXITSTATYS(wst);
            if(ret==1){
                printf("PAR \n");
            }
            else{
                printf("IMPAR \n");

            } 
        }else{
            //deu pau
        }
    }while(ret>=0);
}