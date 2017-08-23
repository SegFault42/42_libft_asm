global _ft_memcpy
;					rdi				rsi			rdx
; void	*memcpy(void *dest, const void *src, size_t n);

_ft_memcpy:
	push rdi
	push rsi

	mov rcx, rdx	; copy la size dans rcx
	rep movsb		; copy rcx octet de rsi dans rdi

	pop rsi
	pop rdi
	mov rax, rdi
	ret
