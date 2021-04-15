int main(){
    int a;
    scanf("%d", &a);
    // se a<0 pula para 55
    if (a<0){
        puts("Negativo");
        // OU printf("Negativo\n");
    }
    else{
        puts("Positivo!");
        // OU printf("Positivo!\n");
    }

    return 0;
}

/*
Dump of assembler code for function main:
   0x1149 <+0>:     sub    $0x18,%rsp
   0x114d <+4>:     lea    0xc(%rsp),%rsi
   0x1152 <+9>:     lea    0xeab(%rip),%rdi        # 0x2004
   0x1159 <+16>:    mov    $0x0,%eax
   0x115e <+21>:    callq  0x1040 <__isoc99_scanf@plt>
   0x1163 <+26>:    cmpl   $0x0,0xc(%rsp)
   0x1168 <+31>:    js     0x1180 <main+55>
   0x116a <+33>:    lea    0xe9f(%rip),%rdi        # 0x2010
   0x1171 <+40>:    callq  0x1030 <puts@plt>
   0x1176 <+45>:    mov    $0x0,%eax
   0x117b <+50>:    add    $0x18,%rsp
   0x117f <+54>:    retq
   0x1180 <+55>:    lea    0xe80(%rip),%rdi        # 0x2007
   0x1187 <+62>:    callq  0x1030 <puts@plt>
   0x118c <+67>:    jmp    0x1176 <main+45>
*/