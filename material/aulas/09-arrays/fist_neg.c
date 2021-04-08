int first_neg(int *vec, int n){
    int var = 0;
    while(var<n){
        if(vec[var]<0){
            return var;
        }
        var+=1;
    }
    return var;

}