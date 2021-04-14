int level6(){
    int var1;
    int var2;
    int var3;

    int ret = 0;

    scanf("%d %d %d", &var1, &var2, &var3);

    ret = var2 + var1;

    ret = ret + var3;

    if(var2<=-3){
        return 0;
    }
    if(var1<=-3){
        return 0;
    }
    if(var3<=-3){
        return 0;
    }
    if(ret<=48){ //0x30
        return 1;
    }
    return 0;
}

// tentar senha 48