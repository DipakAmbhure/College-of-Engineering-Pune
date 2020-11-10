#include<stdio.h>

void main() {
	char a='A';
	char z='Z';
	int m=1;
	int n=2;

	return ;
}

/*
Dump of assembler code for function main:
   0x0000000000001129 <+0>:	endbr64 
   0x000000000000112d <+4>:	push   %rbp
   0x000000000000112e <+5>:	mov    %rsp,%rbp
   0x0000000000001131 <+8>:	movb   $0x41,-0xa(%rbp)
   0x0000000000001135 <+12>:	movb   $0x5a,-0x9(%rbp)
   0x0000000000001139 <+16>:	movl   $0x1,-0x8(%rbp)
   0x0000000000001140 <+23>:	movl   $0x2,-0x4(%rbp)
   0x0000000000001147 <+30>:	nop
   0x0000000000001148 <+31>:	pop    %rbp
   0x0000000000001149 <+32>:	retq   
End of assembler dump.

*/
