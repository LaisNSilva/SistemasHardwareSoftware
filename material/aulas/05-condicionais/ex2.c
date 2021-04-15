int ex2 (unsigned long a, unsigned long b){
    return a <= b;
}

/*
Dump of assembler code for function ex2:
   0x0000000000000000 <+0>: cmp    %rsi,%rdi
   0x0000000000000003 <+3>: setbe  %al
   0x0000000000000006 <+6>: movzbl %al,%eax
   0x0000000000000009 <+9>: retq
End of assembler dump.
*/

// este é unsigned "serbe"