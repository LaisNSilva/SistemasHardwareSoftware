int soma_2n(unsigned int a){
    int res = 1;
    while(a>1){
        //a = a>>1; 
        // equivale a dividir por 2
        a = a/2;
        res+=1;
    }
    // log2(a)
    return res;
}