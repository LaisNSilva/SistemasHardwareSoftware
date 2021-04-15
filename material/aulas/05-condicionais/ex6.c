// goto C

int ex6 (long a, long b){
    // cmp a(rdi) - b(rsi)
    if (a<=b) goto else1;
        b = a;


    else1:
    if(a<=0) goto else2;
        b=!b;
        

    else2:
    return b;
}

int ex6(long a, long b){
    if(a>b){
        b = a; 
    }
    if(a<0){
        b=-b;
    }
    return b;
}

/*
Dump of assembler code for function ex6:
   0x0000000000000000 <+0>:     cmp    %rsi,%rdi
   0x0000000000000003 <+3>:     jle    0x8 <ex6+8>
   0x0000000000000005 <+5>:     mov    %rdi,%rsi
   0x0000000000000008 <+8>:     test   %rdi,%rdi
   0x000000000000000b <+11>:    jle    0x10 <ex6+16>
   0x000000000000000d <+13>:    neg    %rsi
   0x0000000000000010 <+16>:    mov    %esi,%eax
   0x0000000000000012 <+18>:    retq
End of assembler dump.
*/