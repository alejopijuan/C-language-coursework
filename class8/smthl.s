	.file	"smthl.c"
	.text
	.globl	arith
	.type	arith, @function
arith:
.LFB15:
	.cfi_startproc
	movl	%edi, %eax
	xorl	%esi, %eax
	sarl	$3, %eax
	notl	%eax
	subl	%edx, %eax
	ret
	.cfi_endproc
.LFE15:
	.size	arith, .-arith
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
