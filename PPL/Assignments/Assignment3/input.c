#include <stdio.h>

int main(){
	int d;
	scanf("%d",&d);
	if(d>4)
		return 1;
	else
		return 0;
}

/*
   0x0000000000001169 <+0>:	endbr64 
   0x000000000000116d <+4>:	push   %rbp
   0x000000000000116e <+5>:	mov    %rsp,%rbp
   0x0000000000001171 <+8>:	sub    $0x10,%rsp
   0x0000000000001175 <+12>:	mov    %fs:0x28,%rax
   0x000000000000117e <+21>:	mov    %rax,-0x8(%rbp)
   0x0000000000001182 <+25>:	xor    %eax,%eax
   0x0000000000001184 <+27>:	lea    -0xc(%rbp),%rax
   0x0000000000001188 <+31>:	mov    %rax,%rsi
   0x000000000000118b <+34>:	lea    0xe72(%rip),%rdi        # 0x2004
   0x0000000000001192 <+41>:	mov    $0x0,%eax
   0x0000000000001197 <+46>:	callq  0x1070 <__isoc99_scanf@plt>
   0x000000000000119c <+51>:	mov    -0xc(%rbp),%eax
   0x000000000000119f <+54>:	cmp    $0x4,%eax
   0x00000000000011a2 <+57>:	jle    0x11ab <main+66>
   0x00000000000011a4 <+59>:	mov    $0x1,%eax
   0x00000000000011a9 <+64>:	jmp    0x11b0 <main+71>
   0x00000000000011ab <+66>:	mov    $0x0,%eax
   0x00000000000011b0 <+71>:	mov    -0x8(%rbp),%rdx
   0x00000000000011b4 <+75>:	xor    %fs:0x28,%rdx
   0x00000000000011bd <+84>:	je     0x11c4 <main+91>
   0x00000000000011bf <+86>:	callq  0x1060 <__stack_chk_fail@plt>
   0x00000000000011c4 <+91>:	leaveq 
   0x00000000000011c5 <+92>:	retq   
*/
