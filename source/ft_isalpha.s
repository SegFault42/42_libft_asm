global _ft_isalpha

section .text

_ft_isalpha:
	jmp lower

lower:
	cmp rdi, 'a'
	jl upper

	cmp rdi, 'z'
	jg upper

	jmp true

upper:
	cmp rdi, 'A'
	jl false

	cmp rdi, 'Z'
	jg false

	jmp true

false:
	mov rax, 0
	ret

true:
	mov rax, 1
	ret
