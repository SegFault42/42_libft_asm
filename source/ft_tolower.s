global _ft_tolower

extern _ft_isalpha

section .text

_ft_tolower:
	cmp rdi, 65
	jl false

	cmp rdi, 90
	jg false

	add rdi, 32
	mov rax, rdi
	ret

false:
	mov rax, rdi
	ret
