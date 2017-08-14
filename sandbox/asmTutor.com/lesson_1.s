SECTION .data
msg db 'Hello World!', 10     ; assign msg variable with your message string
.len equ $ - msg

SECTION .text
	global _start
	global _main

_start:
	call _main
	ret

_main:
	mov	rdx, len     ; number of bytes to write - one for each letter plus 0Ah (line feed character)
	mov	rcx, msg    ; move the memory address of our message string into ecx
	mov	rbx, 1      ; write to the STDOUT file
	mov	rax, 0x2000004      ; invoke SYS_WRITE (kernel opcode 4)
	syscall
