	.file	"zincr.c"
	.text
	.globl	zincr
	.type	zincr, @function
zincr:
.LFB39:
	.cfi_startproc
	movl	$0, %eax
.L3:
	addl	$1, (%rdi,%rax)
	addq	$4, %rax
	cmpq	$20, %rax
	jne	.L3
	rep ret
	.cfi_endproc
.LFE39:
	.size	zincr, .-zincr
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
