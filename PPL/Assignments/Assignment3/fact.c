#include<stdio.h>

int fact(int val){
	if(val==1 || val==0)
		return 1;
	else
		return val*fact(val-1);

}

int main() {
	printf("%d",fact(10));
	return 0;
}

/*
Dump of assembler code for function main:
   0x000000000000117e <+0>:	endbr64 
   0x0000000000001182 <+4>:	push   %rbp
   0x0000000000001183 <+5>:	mov    %rsp,%rbp
   0x0000000000001186 <+8>:	mov    $0xa,%edi
   0x000000000000118b <+13>:	callq  0x1149 <fact>
   0x0000000000001190 <+18>:	mov    %eax,%esi
   0x0000000000001192 <+20>:	lea    0xe6b(%rip),%rdi        # 0x2004
   0x0000000000001199 <+27>:	mov    $0x0,%eax
   0x000000000000119e <+32>:	callq  0x1050 <printf@plt>
   0x00000000000011a3 <+37>:	mov    $0x0,%eax
   0x00000000000011a8 <+42>:	pop    %rbp
   0x00000000000011a9 <+43>:	retq   
End of assembler dump.


Dump of assembler code for function fact:
   0x0000000000001149 <+0>:	endbr64
   0x000000000000114d <+4>:	push   %rbp
   0x000000000000114e <+5>:	mov    %rsp,%rbp
   0x0000000000001151 <+8>:	sub    $0x10,%rsp
   0x0000000000001155 <+12>:	mov    %edi,-0x4(%rbp)
   0x0000000000001158 <+15>:	cmpl   $0x1,-0x4(%rbp)
   0x000000000000115c <+19>:	je     0x1164 <fact+27>
   0x000000000000115e <+21>:	cmpl   $0x0,-0x4(%rbp)
   0x0000000000001162 <+25>:	jne    0x116b <fact+34>
   0x0000000000001164 <+27>:	mov    $0x1,%eax
   0x0000000000001169 <+32>:	jmp    0x117c <fact+51>
   0x000000000000116b <+34>:	mov    -0x4(%rbp),%eax
   0x000000000000116e <+37>:	sub    $0x1,%eax
   0x0000000000001171 <+40>:	mov    %eax,%edi
   0x0000000000001173 <+42>:	callq  0x1149 <fact>
   0x0000000000001178 <+47>:	imul   -0x4(%rbp),%eax
   0x000000000000117c <+51>:	leaveq
   0x000000000000117d <+52>:	retq
End of assembler dump.


*/
