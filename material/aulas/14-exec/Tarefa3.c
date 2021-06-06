#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>

int main(){

    int num, ret=10;
    do{
        scanf("%d", &num);

        if(fork()==0){
            char *args[]={"./eh_par", "",NULL};
            char int_to_str[20];
            sprintf(int_to_str, "%d", num);
            args[1]=int_to_str; // exec pede argumento sempre como string


            execvp("./eh_par", args);
            printf("EXEC FALHOU!\n");




        }
        int wst;
        wait(&wst);
        if(WIFEXITED(wst)){
            ret=(char) WEXITSTATUS(wst);
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

    return 0;
}