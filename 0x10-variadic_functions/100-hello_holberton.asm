; Define variables in the data section
SECTION .DATA
	hello: db "Hello, Holberton",10
	helloLen: equ $-hello

; Code in text section
SECTION .TEXT
	GLOBAL main

main:
	mov eax,4	;'write' syscall=4
	mov ebx,1	;file descriptor STDOUT = 1
	mov ecx,hello	;string to write
	mov edx,helloLen ;length of string to write
	int 80h		;call the kernel

	;terminate program
	mov eax,1	;'exit' syscall
	mov ebx,0	;exit with error code 0
	int 80h		;call kernel

