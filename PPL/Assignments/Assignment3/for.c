#include<stdio.h>

int main(){
	int i;
	for(i=0; i<10; i++)
		printf("%d",i);
	return i;
}

/*
Dump of assembler code for function main:
   0x0000000000001149 <+0>:	endbr64 
   0x000000000000114d <+4>:	push   %rbp
   0x000000000000114e <+5>:	mov    %rsp,%rbp
   0x0000000000001151 <+8>:	sub    $0x10,%rsp
   0x0000000000001155 <+12>:	movl   $0x0,-0x4(%rbp)
   0x000000000000115c <+19>:	jmp    0x1178 <main+47>
   0x000000000000115e <+21>:	mov    -0x4(%rbp),%eax
   0x0000000000001161 <+24>:	mov    %eax,%esi
   0x0000000000001163 <+26>:	lea    0xe9a(%rip),%rdi        # 0x2004
   0x000000000000116a <+33>:	mov    $0x0,%eax
   0x000000000000116f <+38>:	callq  0x1050 <printf@plt>
   0x0000000000001174 <+43>:	addl   $0x1,-0x4(%rbp)
   0x0000000000001178 <+47>:	cmpl   $0x9,-0x4(%rbp)
   0x000000000000117c <+51>:	jle    0x115e <main+21>
   0x000000000000117e <+53>:	mov    -0x4(%rbp),%eax
   0x0000000000001181 <+56>:	leaveq 
   0x0000000000001182 <+57>:	retq   
End of assembler dump.


*/
