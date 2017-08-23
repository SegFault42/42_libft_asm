global _ft_bzero

section .text

_ft_bzero:
	push rdi

boucle:
	cmp rsi, 0			; compare si le deuxieme argument est superieur a zero
	je end				; si il est a zero jump a la fin

	mov byte[rdi], 0	; deplace de la taille de byte (1 octet) la valeur 0 dans rdi
	inc rdi				; incremente rdi
	dec rsi				; decremente rsi
	jmp boucle		; boucle

end:
	pop rdi
	ret
