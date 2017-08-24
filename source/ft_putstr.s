global _ft_putstr

extern _ft_strlen

_ft_putstr:
	call _ft_strlen
	mov r8, rax		; stock in r8 len
	mov r9, rdi		; stock in r9 string

	mov rax, 0x2000004	; write syscall
	mov rdi, 1			; passing fd 1 in first param
	mov rsi, r9			; passing str in second param
	mov rdx, r8			; passing len in third param
	syscall
	ret
