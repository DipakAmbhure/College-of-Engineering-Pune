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
*/
