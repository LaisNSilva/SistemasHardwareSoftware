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

/*
Dump of assembler code for function ex5:
   0x0000000000000000 <+0>:     test   %rdi,%rdi
   0x0000000000000003 <+3>:     setg   %dl
   0x0000000000000006 <+6>:     test   %rsi,%rsi
   0x0000000000000009 <+9>:     setle  %al
   0x000000000000000c <+12>:    test   %al,%dl
   0x000000000000000e <+14>:    jne    0x15 <ex5+21>
   0x0000000000000010 <+16>:    lea    -0x2(%rsi),%rax
   0x0000000000000014 <+20>:    retq
   0x0000000000000015 <+21>:    lea    0x5(%rdi),%rax
   0x0000000000000019 <+25>:    retq
End of assembler dump.
*/


