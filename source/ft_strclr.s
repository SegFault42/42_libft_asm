global _ft_strclr

_ft_strclr:
	jmp loop

loop:
	cmp byte[rdi], 0
	je finish
	mov byte[rdi], 0
	inc rdi
	jmp loop

finish:
	ret
