int first_neg(int *vec, int n){
    int var = 0;
    while(var<n){
        if(vec[var]<0){
            return var;
        }
        var+=1;
    }
    return var;

}
/*
Dump of assembler code for function first_neg:
   0x0000 <+0>:     mov    $0x0,%eax
   0x0005 <+5>:     cmp    %esi,%eax
   0x0007 <+7>:     jge    0x17 <first_neg+23>
   0x0009 <+9>:     movslq %eax,%rdx
   0x000c <+12>:    cmpl   $0x0,(%rdi,%rdx,4)
   0x0010 <+16>:    js     0x17 <first_neg+23>
   0x0012 <+18>:    add    $0x1,%eax
   0x0015 <+21>:    jmp    0x5 <first_neg+5>
   0x0017 <+23>:    repz retq
*/