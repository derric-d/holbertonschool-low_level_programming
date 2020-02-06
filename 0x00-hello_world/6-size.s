	.file	"6-size.c"
	.intel_syntax noprefix
	.section	.rodata
.LC0:
	.string	"%s a char: %d bytes(s)\n"
.LC1:
	.string	"%s an int: %d bytes(s)\n"
.LC2:
	.string	"%s a long int: %d bytes(s)\n"
	.align 8
.LC3:
	.string	"%s a long long int: %d bytes(s)\n"
.LC4:
	.string	"%s a float: %d bytes(s)\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 64
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR [rbp-8], rax
	xor	eax, eax
	movabs	rax, 2334675641770338643
	mov	QWORD PTR [rbp-32], rax
	mov	BYTE PTR [rbp-24], 0
	mov	DWORD PTR [rbp-52], 1
	mov	DWORD PTR [rbp-48], 4
	mov	DWORD PTR [rbp-44], 8
	mov	DWORD PTR [rbp-40], 8
	mov	DWORD PTR [rbp-36], 4
	mov	edx, DWORD PTR [rbp-52]
	lea	rax, [rbp-32]
	mov	rsi, rax
	mov	edi, OFFSET FLAT:.LC0
	mov	eax, 0
	call	printf
	mov	edx, DWORD PTR [rbp-48]
	lea	rax, [rbp-32]
	mov	rsi, rax
	mov	edi, OFFSET FLAT:.LC1
	mov	eax, 0
	call	printf
	mov	edx, DWORD PTR [rbp-44]
	lea	rax, [rbp-32]
	mov	rsi, rax
	mov	edi, OFFSET FLAT:.LC2
	mov	eax, 0
	call	printf
	mov	edx, DWORD PTR [rbp-40]
	lea	rax, [rbp-32]
	mov	rsi, rax
	mov	edi, OFFSET FLAT:.LC3
	mov	eax, 0
	call	printf
	mov	edx, DWORD PTR [rbp-36]
	lea	rax, [rbp-32]
	mov	rsi, rax
	mov	edi, OFFSET FLAT:.LC4
	mov	eax, 0
	call	printf
	mov	edx, DWORD PTR [rbp-52]
	lea	rax, [rbp-32]
	mov	rsi, rax
	mov	edi, OFFSET FLAT:.LC0
	mov	eax, 0
	call	printf
	mov	eax, 0
	mov	rcx, QWORD PTR [rbp-8]
	xor	rcx, QWORD PTR fs:40
	je	.L3
	call	__stack_chk_fail
.L3:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.4) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
