int soma(int *vec, int arg){
    int indice = 0;
    int s = 0;
    while(indice<arg){
        s+=vec[indice];
        indice+=1;
    }
    return s;

}