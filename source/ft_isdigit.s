global _ft_isdigit

section .text

_ft_isdigit:		; int ft_isascii
	cmp rdi, '0'
	jl false

	cmp rdi, '9'
	jg false

	mov rax, 1
	ret

false:
	mov rax, 0
	ret
