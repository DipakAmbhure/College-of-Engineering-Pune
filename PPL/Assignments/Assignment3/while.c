#include <stdio.h>

int main(){
	int j=0;
	while(j<100)
		j++;
	return j;
}

/*

Dump of assembler code for function main:
   0x0000000000001129 <+0>:	endbr64 
   0x000000000000112d <+4>:	push   %rbp
   0x000000000000112e <+5>:	mov    %rsp,%rbp
   0x0000000000001131 <+8>:	movl   $0x0,-0x4(%rbp)
   0x0000000000001138 <+15>:	jmp    0x113e <main+21>
   0x000000000000113a <+17>:	addl   $0x1,-0x4(%rbp)
   0x000000000000113e <+21>:	cmpl   $0x63,-0x4(%rbp)
   0x0000000000001142 <+25>:	jle    0x113a <main+17>
   0x0000000000001144 <+27>:	mov    -0x4(%rbp),%eax
   0x0000000000001147 <+30>:	pop    %rbp
   0x0000000000001148 <+31>:	retq   
End of assembler dump.

*/
