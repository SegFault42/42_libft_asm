global _ft_memmalloc

extern _malloc
extern _ft_memset

_ft_memmalloc:
	push rdi		; save size

	call _malloc

	cmp rax, 0		; if ret malloc = NULL ret
	je go_to_null

	mov rdi, rax	; mov retour de malloc dans first param
	mov rsi, 0		; deuxieme param set a \0
	pop rdx			; met la len dans le troisieme param
	call _ft_memset
	ret

go_to_null:
	pop rdi
	ret
