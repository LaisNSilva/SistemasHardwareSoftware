int soma_2n(unsigned int a){ // ja - unsigned
    int res = 1;
    while(a>1){
        //a = a>>1; 
        // equivale a dividir por 2
        a = a/2;
        res+=1;
    }
    // log2(a)
    return res;
}

/*

Dump of assembler code for function soma_2n:
   0x066a <+0>:     mov    $0x1,%eax
   0x066f <+5>:     jmp    0x676 <soma_2n+12>
   0x0671 <+7>:     shr    %edi
   0x0673 <+9>:     add    $0x1,%eax
   0x0676 <+12>:    cmp    $0x1,%edi
   0x0679 <+15>:    ja     0x671 <soma_2n+7>
   0x067b <+17>:    repz retq

   */