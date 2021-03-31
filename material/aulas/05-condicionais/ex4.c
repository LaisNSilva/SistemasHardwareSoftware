// gotoC

long fun4 (long a, long b){
    int c;
    if(a <=0) goto if1:
    
    c = 2;

    if1:
    c = 1;

    return c*b;
}

// C (tarefa 5)

long fun4(long a, long b){
    int c;
    if (a<=0){
        c = 1;
        
    }
    else{
        c = 2;
    }

    return c*b;
}