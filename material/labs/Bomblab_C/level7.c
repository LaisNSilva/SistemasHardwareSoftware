int level7(){
    int si;

    scanf("%ld", &si);

    int ax = 0;

    int cx = 0;

    int dx;

    while(ax<=11){
        dx= ax;
        cx +=dx;
        ax +=1;

    }
    // então cx =0+1+2+3+4+5+6+7+8+9+10+11 = 66
    dx = 1431655766; // $0x5555555555555556 é positivo
    ax = cx;
    dx = ax*dx; // = 94489280560

    cx = cx >>63; // o que isso faz??

    dx -= cx

    char equal = &si==dx;

    return (int)equal;



}