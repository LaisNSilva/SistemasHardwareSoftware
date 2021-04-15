int func_que_recebe_array(int *vec){
    int ret = vec[1];
    ret += vec[0];
    return ret<vec[2];

}

/*

Dump of assembler code for function func_que_recebe_array:
   0x0000 <+0>:     mov    0x4(%rdi),%eax
   0x0003 <+3>:     add    (%rdi),%eax
   0x0005 <+5>:     cmp    0x8(%rdi),%eax
   0x0008 <+8>:     setl   %al
   0x000b <+11>:    movzbl %al,%eax
   0x000e <+14>:    retq
*/