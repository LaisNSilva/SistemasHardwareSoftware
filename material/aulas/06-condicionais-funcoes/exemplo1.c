int exemplo1(int a, int b, int c, int d, int e, int f) {
    return a+b+c+d+e+f;
}

int main() {
    int c = exemplo1(1, 2, 3, 4, 5, 6) + 10;
    printf("%ld\n", c);
}

/*
MAIN
0x065c <+4>:     mov    $0x6,%r9d
0x0662 <+10>:    mov    $0x5,%r8d
0x0668 <+16>:    mov    $0x4,%ecx
0x066d <+21>:    mov    $0x3,%edx
0x0672 <+26>:    mov    $0x2,%esi
0x0677 <+31>:    mov    $0x1,%edi
0x067c <+36>:    callq  0x64a <exemplo1>
0x0681 <+41>:    lea    0xa(%rax),%esi

exemplo1

Dump of assembler code for function exemplo1:
   0x064a <+0>:     add    %esi,%edi
   0x064c <+2>:     add    %edi,%edx
   0x064e <+4>:     add    %edx,%ecx
   0x0650 <+6>:     add    %r8d,%ecx
   0x0653 <+9>:     lea    (%rcx,%r9,1),%eax
   0x0657 <+13>:    retq


*/
