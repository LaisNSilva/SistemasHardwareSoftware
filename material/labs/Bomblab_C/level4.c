int level4(long a, long b){
    long ret = a;
    int var = 0;
    // div -> sem sinal
    ret = a/b;
    var = a%b;
    if(var==2){
        return 1;
    }
    else{
        return 0;
    }
}