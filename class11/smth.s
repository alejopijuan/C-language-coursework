	.file	"smth.c"
	.text
	.globl	get_digit
	.type	get_digit, @function
get_digit:
.LFB39:
	.cfi_startproc
	movslq	%esi, %rsi
	movl	(%rdi,%rsi,4), %eax
	ret
	.cfi_endproc
.LFE39:
	.size	get_digit, .-get_digit
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
