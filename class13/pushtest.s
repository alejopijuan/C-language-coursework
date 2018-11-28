	.global _pushtest
_pushtest:
	push	%rbp
	movl	%esp, %ebp
	movl	%esp, %eax
	push	%rsp
	pop	%rdx
	subl	%edx, %eax
	pop	%rbp
	ret
