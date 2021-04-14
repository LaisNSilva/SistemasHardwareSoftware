int level8(){
    int si;

    int ax = 0;

    scanf("%u", &si); // int sem sinal

    int dx=1;
    ax = &si;
    while(si>1){  //ja sem sinal
        ax=ax/2;
        si = ax;
        dx +=1;
        ax = &si;
    }
    char equal = dx ==8;
    return (int)equal;

}

//para dx == 8 precisa passar dentro do while 8 vezes
// si = 256 (2⁸)