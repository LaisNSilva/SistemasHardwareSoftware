int ex3 (long a, long b){
    char c = a>b;
    char d = b > 0;
    return c && d;


}

/*
Dump of assembler code for function ex3:
   0x0000000000000000 <+0>:     cmp    %rsi,%rdi
   0x0000000000000003 <+3>:     setg   %al
   0x0000000000000006 <+6>:     test   %rsi,%rsi
   0x0000000000000009 <+9>:     setg   %dl
   0x000000000000000c <+12>:    and    %edx,%eax
   0x000000000000000e <+14>:    movzbl %al,%eax
   0x0000000000000011 <+17>:    retq
End of assembler dump.
*/