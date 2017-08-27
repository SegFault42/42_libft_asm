global _ft_strdup

; char	*strdup(const char *s);
section .text
	extern _malloc
	extern _ft_strlen
	extern _ft_memcpy
	extern _ft_bzero
	extern _puts

_ft_strdup:
	push rsi
	push rdi

	call _ft_strlen	; count len of rdi
	inc rax			; incremente la len de 1 pour le \0
	push rax		; save len dans la stack
	mov rdi, rax	; met la len dans le 1st param
	call _malloc	; sans commentaire
	cmp rax, 0
	je got_to_null	; if malloc == NULL return NULL

	mov rsi, rdi	; copy la len dans rdi
	mov rdi, rax	; copy le pointeur renvoyer par malloc dans rdi
	call _ft_bzero	; lol

	pop rdx			; pop rax dans rdx (len)
	pop rsi			; set secnd param (pop rdi dans rsi)
	call _ft_memcpy ; loul
	pop rsi

	ret

got_to_null:
	pop rax
	pop rdi
	pop rsi
	mov rax, 0 ; return NULL
	ret
