void ex2(int a, int *b){
    a +=10;
    *b = a;
}

/*
0x0000000000000000 <+0>:	add    $0xa,%edi
0x0000000000000003 <+3>:	mov    %edi,(%rsi)
0x0000000000000005 <+5>:	retq  
*/
