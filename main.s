global start

section .data
	text db "Hello, world!", 10

section .text
	;global start
	;global _main

start:
	call _main
	ret

_main:
	mov rax, 0x2000004
	mov rdi, 1
	mov rsi, text
	mov rdx, 14
	syscall

	mov rax, 0x2000001
	mov rdi, 0
	syscall
