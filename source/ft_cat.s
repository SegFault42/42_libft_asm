%define BUFF_SIZE	101
%define STR_LEN		BUFF_SIZE -1

section .bss
	buff resb BUFF_SIZE

section .text
	extern _ft_putstr
	extern _ft_bzero
	global _ft_cat

; void	ft_cat(int fd);

_ft_cat:
	push rdi

	mov rdi, buff		; copy le buffer dans 1st param
	mov rsi, BUFF_SIZE	; met la len dans le deuxieme param
	call _ft_bzero		; apelle bzero

loop:
	mov rsi, buff		; move le buffer dans rsi
	pop rdi				; pop le fd dans le first param
	mov rdx, STR_LEN	; set third param pour bzero
	mov rax, 0x2000003	; addr de read
	syscall				; read syscall

	cmp rax, 0
	jle error_or_finish

	mov rcx, rax
	push rdi

	mov rdi, rsi		; buffer dans 1st param de read
	call _ft_putstr		; apelle puts

	jmp loop

error_or_finish:
	ret
