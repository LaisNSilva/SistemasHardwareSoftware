/* POSIX headers */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/* Standard C */
#include <stdio.h>

int main (int argc, char *argv[]) {
    char arq1[100]; // nomes do arquivo, recebido via scanf
    char buf[1]; // local usado para guardar os dados lidos de arq1
    
    char arq2[100];
    
    scanf("%s", &arq1);
    scanf("%s", &arq2);
    int fd1 = open(arq1, O_RDONLY);
    int fd2 = open(arq2, O_WRONLY | O_CREAT, 0700);
    int total = 1;
    
    while(total!=0){
        total=read(fd1, &buf, 1);
        if(total>0){
        	write(fd2, &buf, 1);
        }
        //printf("Caracter lido: %c\n", buf[0]);
    }
    close(fd1);
    close(fd2);
    
    
    return 0;
}
