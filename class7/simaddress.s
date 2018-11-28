	.file	"simaddress.c"
	.text
	.globl	swap
	.type	swap, @function
swap:
.LFB39:
	.cfi_startproc
	rep ret
	.cfi_endproc
.LFE39:
	.size	swap, .-swap
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"x=%ld and y=%ld"
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC1:
	.string	"After Swap: \n\t x = %ld and y = %ld"
	.text
	.globl	main
	.type	main, @function
main:
.LFB40:
	.cfi_startproc
	subq	$8, %rsp
	.cfi_def_cfa_offset 16
	movl	$6789, %ecx
	movl	$12345, %edx
	movl	$.LC0, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk
	movl	$6789, %ecx
	movl	$12345, %edx
	movl	$.LC1, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk
	movl	$0, %eax
	addq	$8, %rsp
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE40:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
