int ex1(int a, int b){
    int c = a;
    c -= b;
    return c;

}

/*
0000000000000000 <ex1>:
0:   89 f8                   mov    %edi,%eax
2:   29 f0                   sub    %esi,%eax
4:   c3                      retq
*/



