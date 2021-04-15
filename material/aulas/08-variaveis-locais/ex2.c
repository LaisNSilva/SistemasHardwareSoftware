void func1(){
    int a = 10;
    int b = 11;
    func2(&a);
    b=b+1;
    func2(&b);


}

/*

Dump of assembler code for function func1:
   0x05fe <+0>:     sub    $0x10,%rsp
   0x0602 <+4>:     movl   $0xa,0xc(%rsp)
   0x060a <+12>:    movl   $0xb,0x8(%rsp)
   0x0612 <+20>:    lea    0xc(%rsp),%rdi
   0x0617 <+25>:    callq  0x5fa <func2>
   0x061c <+30>:    addl   $0x1,0x8(%rsp)
   0x0621 <+35>:    lea    0x8(%rsp),%rdi
   0x0626 <+40>:    callq  0x5fa <func2>
   0x062b <+45>:    add    $0x10,%rsp
   0x062f <+49>:    retq 

*/