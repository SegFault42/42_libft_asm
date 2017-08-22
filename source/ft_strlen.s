global _ft_strlen

section .text

;_ft_strlen:
	;xor rax, rax	; set rax to 0
	;mov rsi, rdi	; move rdi (la string) dans rsi
	;jmp loop		; go to loop label

;loop:
	;cmp byte[rsi], 0	; compare rsi avec 0.
	;je end				; si rsi == 0 (\0) go to end parce que c'est la fin de la string
	;inc rax				; incremente rax (nombre d'iteration avant d'arriver a la fin de la str)
	;inc rsi				; incremnte rsi de 1 caractere
	;jmp loop			; go to loop

;end:
	;ret

_ft_strlen:
	push rdi
	mov rax, 0		; met '\0' dans rax
	xor rcx, rcx	; init rcx a 0
	sub rcx, 1		; inversse rcx
	repne scasb		; (repne = REP while Not Equal) (scasb = searching for first elem equal with rax) avance dans la chaine et decremente rcx
	not rcx			; re-inversse rcx
	sub rcx, 1		; decremente de 1
	mov rax, rcx	; copy rcx dans rax
	pop rdi
	ret
