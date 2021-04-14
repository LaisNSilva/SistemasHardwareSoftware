int level9(){
    int bx = 0;
    long dx;
    int si;
    int ax[];
    while(bx<=9){
        dx = bx;
        scanf("%ld", ax[dx]);

        bx+=1;   
    }
    si = 10;

    ax = func3(ax, 10); // retorna a soma
    if (ax<=10){
        return 0;
    }
    // então a soma tem que ser maior que 10
    ax = fun2(ax, 10);
    if(ax==0){
        return 0;
    }
    // tem que ter algum elemento negativo

    ax = func1(ax, 10);
    if (ax==0){
        return 0;
    }


    return 1;

}

int func3(int vec[], int n){
    int dx = 0;
    int ax = 0;
    int rx;
    while(dx<n){
        rx=dx;
        ax+=vec[rx];
        rx++;

    }
    return ax;
}

int func2(int vec[], int n){
    int ax=0;
    if(ax>=n){
        return 0;
    }
    int dx = ax;
    if(vec[dx]<0){
        return 1;
    }
}

int func1(int vec[], int n){
    int ax = 0;
    int dx = n-1;

    while(dx<=ax){
        
    }
    dx=ax;
    if(vec[dx]>vec[dx]+8){
        return 0;
    }

    return 1;
   
}
