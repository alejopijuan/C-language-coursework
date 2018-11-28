	.file	"switcheg.c"
	.text
	.globl	switcheg
	.type	switcheg, @function
switcheg:
.LFB39:
	.cfi_startproc
	movq	%rdx, %rcx
	cmpq	$6, %rdi
	ja	.L8
	jmp	*.L4(,%rdi,8)
	.section	.rodata
	.align 8
	.align 4
.L4:
	.quad	.L8
	.quad	.L3
	.quad	.L5
	.quad	.L9
	.quad	.L8
	.quad	.L10
	.quad	.L10
	.text
.L3:
	movq	%rsi, %rax
	imulq	%rdx, %rax
	ret
.L5:
	movq	%rsi, %rax
	cqto
	idivq	%rcx
	jmp	.L6
.L9:
	movl	$1, %eax
.L6:
	addq	%rcx, %rax
	jmp	.L7
.L10:
	movl	$1, %eax
.L7:
	subq	%rcx, %rax
	ret
.L8:
	movl	$2, %eax
	ret
	.cfi_endproc
.LFE39:
	.size	switcheg, .-switcheg
	.section	.rodata.str1.1,"aMS",@progbits,1
.LC0:
	.string	"\nChp 3 - switch statement\n"
	.section	.rodata.str1.8,"aMS",@progbits,1
	.align 8
.LC1:
	.string	"Enter case number 1 to 6 (0 to quit): "
	.section	.rodata.str1.1
.LC2:
	.string	"%d"
	.section	.rodata.str1.8
	.align 8
.LC3:
	.string	"\n\tcase number: %d\t case result: %d\n\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB40:
	.cfi_startproc
	pushq	%rbx
	.cfi_def_cfa_offset 16
	.cfi_offset 3, -16
	subq	$16, %rsp
	.cfi_def_cfa_offset 32
	movl	$.LC0, %edi
	call	puts
.L13:
	movl	$.LC1, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk
	leaq	12(%rsp), %rsi
	movl	$.LC2, %edi
	movl	$0, %eax
	call	__isoc99_scanf
	movl	12(%rsp), %ebx
	movslq	%ebx, %rdi
	movl	$5, %edx
	movl	$9, %esi
	call	switcheg
	movl	%eax, %ecx
	movl	%ebx, %edx
	movl	$.LC3, %esi
	movl	$1, %edi
	movl	$0, %eax
	call	__printf_chk
	cmpl	$0, 12(%rsp)
	jne	.L13
	movl	$0, %eax
	addq	$16, %rsp
	.cfi_def_cfa_offset 16
	popq	%rbx
	.cfi_def_cfa_offset 8
	ret
	.cfi_endproc
.LFE40:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
