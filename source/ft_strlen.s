global _ft_strlen

section .text

_ft_strlen:
	xor rax, rax	; set rax to 0
	mov rsi, rdi	; move rdi (la string) dans rsi
	jmp loop		; go to loop label

loop:
	cmp byte[rsi], 0	; compare rsi avec 0.
	je end				; si rsi == 0 (\0) go to end parce que c'est la fin de la string
	inc rax				; incremente rax (nombre d'iteration avant d'arriver a la fin de la str)
	inc rsi				; incremnte rsi de 1 caractere
	jmp loop			; go to loop

end:
	ret					; fin
