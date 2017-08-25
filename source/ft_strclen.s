global _ft_strclen

section .text

_ft_strclen:
	push rdi
	mov rax, rsi		; met '\0' dans rax
	xor rcx, rcx	; init rcx a 0
	sub rcx, 1		; inversse rcx
	repne scasb		; (repne = REP while Not Equal) (scasb = searching for first elem equal with rax) avance dans la chaine et decremente rcx
	not rcx			; re-inversse rcx
	sub rcx, 1		; decremente de 1
	mov rax, rcx	; copy rcx dans rax
	pop rdi
	ret
