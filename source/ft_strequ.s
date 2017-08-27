global _ft_strequ

extern _ft_strlen

_ft_strequ:
	cmp rdi, 0
	je check_null_rsi
	cmp rsi, 0
	je check_null_rdi

	call _ft_strlen
	mov rcx, rax

	cld					; clear df flag (DF = 0)
	repe cmpsb			; parcour la chaine et met le DF flag a 1 si il ny a pas de diff

	jz finish_true	; check si le df flag est a 1
	jmp finish_false

check_null_rsi:
	cmp rsi, 0
	je finish_true
	jmp finish_false
	ret

check_null_rdi:
	cmp rdi, 0
	je finish_true
	jmp finish_false
	ret

finish_true:
	mov rax, 1
	ret

finish_false:
	mov rax, 0
	ret
