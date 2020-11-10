#include <stdio.h>

int main(){
	int A[20];
	for(int i=0; i<10; i++)
		A[i]=i;
	return 0;
}

/*
Dump of assembler code for function main:
   0x0000000000001149 <+0>:	endbr64 
   0x000000000000114d <+4>:	push   %rbp
   0x000000000000114e <+5>:	mov    %rsp,%rbp
   0x0000000000001151 <+8>:	sub    $0x70,%rsp
   0x0000000000001155 <+12>:	mov    %fs:0x28,%rax
   0x000000000000115e <+21>:	mov    %rax,-0x8(%rbp)
   0x0000000000001162 <+25>:	xor    %eax,%eax
   0x0000000000001164 <+27>:	movl   $0x0,-0x64(%rbp)
   0x000000000000116b <+34>:	jmp    0x117d <main+52>
   0x000000000000116d <+36>:	mov    -0x64(%rbp),%eax
   0x0000000000001170 <+39>:	cltq   
   0x0000000000001172 <+41>:	mov    -0x64(%rbp),%edx
   0x0000000000001175 <+44>:	mov    %edx,-0x60(%rbp,%rax,4)
   0x0000000000001179 <+48>:	addl   $0x1,-0x64(%rbp)
   0x000000000000117d <+52>:	cmpl   $0x9,-0x64(%rbp)
   0x0000000000001181 <+56>:	jle    0x116d <main+36>
   0x0000000000001183 <+58>:	mov    $0x0,%eax
   0x0000000000001188 <+63>:	mov    -0x8(%rbp),%rcx
   0x000000000000118c <+67>:	xor    %fs:0x28,%rcx
   0x0000000000001195 <+76>:	je     0x119c <main+83>
--Type <RET> for more, q to quit, c to continue without paging--c
   0x0000000000001197 <+78>:	callq  0x1050 <__stack_chk_fail@plt>
   0x000000000000119c <+83>:	leaveq 
   0x000000000000119d <+84>:	retq   
End of assembler dump.
*/
