int ex1 (int a){
    return a > 10;
}

/*
Dump of assembler code for function ex1:
   0x0000000000000000 <+0>: cmp    $0xa,%edi
   0x0000000000000003 <+3>: setg   %al
   0x0000000000000006 <+6>: movzbl %al,%eax
   0x0000000000000009 <+9>: retq
End of assembler dump.
*/