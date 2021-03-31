//goto C
long ex5(long a, long b){
    //int c = a & a;
    char c1 = 0;
    if (a>0){
        c1=1;
    }
    //int d = b & b;
    char d1 = 0;
    if (b<=0){
        d1=1;
    }
    
     if (c1 & d1!=0) goto else1;
        return a-2;

     else1:
     return 5+a;
}

long ex5(long a, long b){
    
    int c1 = 0;
    if (a>0){
        c1=1;
    }
    
    int d1 = 0;
    if (b<=0){
        d1=1;
    }
    
    if (c1 & d1==0){
        return a-2;
    } else{
        return a+5;

    }
        
     
     
}


