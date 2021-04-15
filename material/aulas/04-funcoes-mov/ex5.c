void ex5(int a, int b, int *div, int *rem) {
    *div = a/b;
    *rem = a%b;
}

int main() {
    int d, r;
    ex5(10, 3, &d, &r);
    return d;
}

/*
MAIN

60b:   48 8d 4c 24 08          lea    0x8(%rsp),%rcx
610:   48 8d 54 24 0c          lea    0xc(%rsp),%rdx
615:   be 03 00 00 00          mov    $0x3,%esi
61a:   bf 0a 00 00 00          mov    $0xa,%edi
61f:   e8 d6 ff ff ff          callq  5fa <ex5>

ex5

00000000000005fa <ex5>:
5fa:   89 f8                   mov    %edi,%eax
5fc:   48 89 d7                mov    %rdx,%rdi
5ff:   99                      cltd
600:   f7 fe                   idiv   %esi
602:   89 07                   mov    %eax,(%rdi)
604:   89 11                   mov    %edx,(%rcx)
606:   c3                      retq
*/