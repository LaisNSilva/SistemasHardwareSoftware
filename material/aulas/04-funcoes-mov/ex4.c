int ex4(int a, int b){
    int c = a*b;
    // 0x20 = 32
    int d = c + 32;
    return d;
}

/*
0x000000000000066a <+0>:	imul   %esi,%edi
0x000000000000066d <+3>:	lea    0x20(%rdi),%eax
0x0000000000000670 <+6>:	retq 
*/ 
