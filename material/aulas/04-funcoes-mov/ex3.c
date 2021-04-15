void ex3(int *a, int *c){
    int b = *c;
    b = b*b;
    *a = b;

    // imul 

}

/*
0000000000000000 <ex3>:
0:   8b 06                   mov    (%rsi),%eax
2:   0f af c0                imul   %eax,%eax
5:   89 07                   mov    %eax,(%rdi)
7:   c3                      retq
*/
