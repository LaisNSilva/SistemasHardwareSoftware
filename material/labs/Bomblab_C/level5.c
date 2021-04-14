int level5(long a, long b, long *c){
    long ret = a +a*2; // a=-90 ret = -270
    ret = 105+(ret+b*2); ///  12345678 = 105 +(-270+b*2)
    // b = 28021

    int b = ret == 12345678;

    int cl = a!=b;

    if(cl != b){
        *c = 0;
    }
    else{
        *c =1;
    }





    char var = == ret;
    char var2 = b!=a;
    if (var==var2){
        *c=1;
        
    }
    else{
        *c= 0;
    }

    char var3 = ret>55875; // 0xda43
    char var4 = a<-88; 
    char and = c && ret;

    ret = var3;
    
    return ret;
}