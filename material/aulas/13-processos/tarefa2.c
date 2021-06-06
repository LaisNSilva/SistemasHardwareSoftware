#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main() {
    pid_t filho;
    
    // dentro do for ele faz clone do que ja estava
    for (int i=0; i<8; i++){
    	filho = fork();
    	if (filho==0){
    		printf("Eu sou o filho %d\n", i);
    		return 0; // isso evita a confusão pq cada filho termina!
    	}
    	else{
    		printf("Pai i=%d\n", i);
    	}
    	
    
    }

    
    return 0;
}
