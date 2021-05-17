int eh_par(int argc, char *argv[]){
    if(argc<2){
        printf("Erro!\n");
        return -1;
    }
    int num1 = atof(argv[1]);
    if(num1>=0){
        return num1 % 2 == 0;
    }
    
    return -1;
    
}
