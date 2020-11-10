#include<stdio.h>

int main() {
	char A[10];
	for(int i=0;i<1000; i++)
		A[i]='A';
	return 0;
}

/*
Dump of assembler code for function main:
   0x0000000000001149 <+0>:	endbr64 
   0x000000000000114d <+4>:	push   %rbp
   0x000000000000114e <+5>:	mov    %rsp,%rbp
   0x0000000000001151 <+8>:	sub    $0x20,%rsp
   0x0000000000001155 <+12>:	mov    %fs:0x28,%rax
   0x000000000000115e <+21>:	mov    %rax,-0x8(%rbp)
   0x0000000000001162 <+25>:	xor    %eax,%eax
   0x0000000000001164 <+27>:	movl   $0x0,-0x18(%rbp)
   0x000000000000116b <+34>:	jmp    0x117b <main+50>
   0x000000000000116d <+36>:	mov    -0x18(%rbp),%eax
   0x0000000000001170 <+39>:	cltq   
   0x0000000000001172 <+41>:	movb   $0x41,-0x12(%rbp,%rax,1)
   0x0000000000001177 <+46>:	addl   $0x1,-0x18(%rbp)
   0x000000000000117b <+50>:	cmpl   $0x3e7,-0x18(%rbp)
   0x0000000000001182 <+57>:	jle    0x116d <main+36>
   0x0000000000001184 <+59>:	mov    $0x0,%eax
   0x0000000000001189 <+64>:	mov    -0x8(%rbp),%rdx
   0x000000000000118d <+68>:	xor    %fs:0x28,%rdx
   0x0000000000001196 <+77>:	je     0x119d <main+84>
   0x0000000000001198 <+79>:	callq  0x1050 <__stack_chk_fail@plt>
--Type <RET> for more, q to quit, c to continue without paging--c
   0x000000000000119d <+84>:	leaveq 
   0x000000000000119e <+85>:	retq   
End of assembler dump.
*/
