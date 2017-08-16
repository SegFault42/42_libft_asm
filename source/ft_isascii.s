global _ft_isascii

section .text

_ft_isascii:		; int ft_isascii
	cmp rdi, 0		; cmp (comparaison) de rdi (1ere argument) avec 0
	jl false		; jl = operateur strictement inferieur. Va au label false si rdi < 0

	cmp rdi, 127
	jg false		; jg = operateur strictement superieur. Va au label false si rdi > 127

	mov rax, 1		; mov ( rax <- 1) assigne la valeur 1 dans rax (rax contient la valeur de retour de la fontion)
	ret				; return rax

false:
	mov rax, 0
	ret
