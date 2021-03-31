// goto C

int ex6 (long a, long b){
    // cmp a(rdi) - b(rsi)
    if (a<=b) goto else1;
        b = a;


    else1:
    if(a<=0) goto else2;
        b=!b;
        

    else2:
    return b;
}

int ex6(long a, long b){
    if(a>b){
        b = a; 
    }
    if(a<0){
        b=!b;
    }
    return b;
}