#include <iostream>
using namespace std;

int fact(int val){
	if (val==0 || val==1){
		return 1;
	}
	else{
		return val*fact(val-1);
	}
}

int main(){
	cout << fact(4);

	return 0;
}

/*
Dump of assembler code for function main:
   0x00000000000011be <+0>:	endbr64
   0x00000000000011c2 <+4>:	push   %rbp
   0x00000000000011c3 <+5>:	mov    %rsp,%rbp
   0x00000000000011c6 <+8>:	mov    $0x4,%edi
   0x00000000000011cb <+13>:	callq  0x1189 <_Z4facti>
   0x00000000000011d0 <+18>:	mov    %eax,%esi
   0x00000000000011d2 <+20>:	lea    0x2e67(%rip),%rdi        # 0x4040 <_ZSt4cout@@GLIBCXX_3.4>
   0x00000000000011d9 <+27>:	callq  0x1090 <_ZNSolsEi@plt>
   0x00000000000011de <+32>:	mov    $0x0,%eax
   0x00000000000011e3 <+37>:	pop    %rbp
   0x00000000000011e4 <+38>:	retq
End of assembler dump.


Dump of assembler code for function _Z4facti:
   0x0000000000001189 <+0>:	endbr64
   0x000000000000118d <+4>:	push   %rbp
   0x000000000000118e <+5>:	mov    %rsp,%rbp
   0x0000000000001191 <+8>:	sub    $0x10,%rsp
   0x0000000000001195 <+12>:	mov    %edi,-0x4(%rbp)
   0x0000000000001198 <+15>:	cmpl   $0x0,-0x4(%rbp)
   0x000000000000119c <+19>:	je     0x11a4 <_Z4facti+27>
   0x000000000000119e <+21>:	cmpl   $0x1,-0x4(%rbp)
   0x00000000000011a2 <+25>:	jne    0x11ab <_Z4facti+34>
   0x00000000000011a4 <+27>:	mov    $0x1,%eax
   0x00000000000011a9 <+32>:	jmp    0x11bc <_Z4facti+51>
   0x00000000000011ab <+34>:	mov    -0x4(%rbp),%eax
   0x00000000000011ae <+37>:	sub    $0x1,%eax
   0x00000000000011b1 <+40>:	mov    %eax,%edi
   0x00000000000011b3 <+42>:	callq  0x1189 <_Z4facti>
   0x00000000000011b8 <+47>:	imul   -0x4(%rbp),%eax
   0x00000000000011bc <+51>:	leaveq
   0x00000000000011bd <+52>:	retq
End of assembler dump.



*/
