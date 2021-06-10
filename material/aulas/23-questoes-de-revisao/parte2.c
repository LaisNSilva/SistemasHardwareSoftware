#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int linha = 0;

int tamanho_linha(int fd){
    int tamanho=0;
    char buf[1];
    int contador=0;
    int i = 0;
    int total = 1;
    while(total!=0 && total!=-1){
            
            total = read(fd, buf, 1);
             
            if(total>0){

                if (buf[0]=='\n'){
                    contador++;
                }

                if (linha==contador){
                    tamanho++;
                    
                }

            }
    }

    return tamanho;

}

char *proxima_linha(int fd) {
    int tamanho = tamanho_linha(fd);
    char string_linha[tamanho];
    char buf[1];
    int contador=0;
    int i = 0;
    int total = 1;
    
    while(total!=0 && total!=-1){
            
            total = read(fd, buf, 1);
            
            if(total>0){

                if (linha==contador){
                    string_linha[i]=buf[0];
                    i++;
                }
                if(contador>linha){
                    return string_linha;
                }

                if (buf[0]=='\n'){
                    contador++;
                }


            }
            else{
                return NULL;
            }
    }
}

char maiusculas[27] = "ABCDEFGHIJKLMNOPRSTUVWXYZ\0";
int main(int argc, char *argv[]) {

    int fd = open(argv[2], O_RDONLY);
    char linha_main[100]="";

    while(linha_main!=NULL){
        char linha_main[tamanho_linha(fd)];
        strcpy(linha_main, proxima_linha(fd));

        
        for(int i=0; i<26; i++){
            if(linha_main[0]==maiusculas[i]){
                printf("%s", linha_main);
            }
        }

        linha++;
    }


    return 0;
}