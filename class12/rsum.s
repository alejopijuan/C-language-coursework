	.file	"implement.c"
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	" sum = %d\n"
	.section	.text.startup,"ax",@progbits
	.p2align 4,,15
	.globl	main
	.type	main, @function
main:
.LFB39:
	.cfi_startproc
	leaq	-56(%rsp), %rax
	movl	$1, -56(%rsp)
	movl	$2, -52(%rsp)
	movl	$3, -48(%rsp)
	movl	$4, -44(%rsp)
	movl	$1, %ecx
	movl	$5, -40(%rsp)
	movl	$6, -36(%rsp)
	xorl	%edx, %edx
	movl	$7, -32(%rsp)
	movl	$8, -28(%rsp)
	leaq	36(%rax), %rsi
	movl	$9, -24(%rsp)
	jmp	.L3
	.p2align 4,,10
	.p2align 3
.L5:
	movl	(%rax), %ecx
.L3:
	addq	$4, %rax
	addl	%ecx, %edx
	cmpq	%rsi, %rax
	jne	.L5
	movl	$.LC0, %esi
	movl	$1, %edi
	xorl	%eax, %eax
	jmp	__printf_chk
	.cfi_endproc
.LFE39:
	.size	main, .-main
	.text
	.p2align 4,,15
	.globl	rSum
	.type	rSum, @function
rSum:
.LFB40:
	.cfi_startproc
	xorl	%eax, %eax
	testl	%esi, %esi
	jle	.L9
	.p2align 4,,10
	.p2align 3
.L8:
	movl	(%rdi), %edx
	addq	$4, %rdi
	addl	%edx, %eax
	subl	$1, %esi
	jne	.L8
	rep ret
.L9:
	rep ret
	.cfi_endproc
.LFE40:
	.size	rSum, .-rSum
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
