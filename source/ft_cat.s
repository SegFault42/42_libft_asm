%define BUFF_SIZE	100

section .bss
	buff resb BUFF_SIZE

section .text
	extern _ft_putstr_len
	extern _ft_bzero
	global _ft_cat

_ft_cat:
	cmp edi, 0				; verification du fd
	jl error_or_finish

	mov r10, rdi ; sauvegarde du fd dans r10

loop:
	lea rsi, [rel buff]		; move le buffer dans rsi
	mov rdi, r10		; fd in first arg
	mov rdx, BUFF_SIZE	; set third param pour bzero
	mov rax, 0x2000003	; addr de read
	syscall				; read syscall

	jc error_or_finish	; read error
	cmp rax, 0			; nothing to read
	jle error_or_finish

	lea rdi, [rel buff]		; buffer dans 1st param de read
	mov rsi, rax		; set len with read return
	call _ft_putstr_len	; apelle putstr

	jmp loop

error_or_finish:
	ret
