global _ft_memset

; void memset(void *s, int c, size_t n);

_ft_memset:
	push rdi		;save rdi

	mov rcx, rdx	; move size dans rcx
	mov rax, rsi	; mov charactere we need in rax
	rep stosb		; (rep = rep while rcx != 0) (stosb ajoute dans rdi rax) avance dans rdi rcx fois et remplie rdi par rax

	pop rax			; pop rdi in rax
	ret
