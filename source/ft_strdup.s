global _ft_strdup

; char	*strdup(const char *s);
section .text
	extern _malloc
	extern _ft_strlen
	extern _ft_memcpy
	extern _sleep
	extern _puts

_ft_strdup:
	push rdi

	call _ft_strlen	; count len of rdi
	;mov rcx, rax	; copy len dans rcx
	;mov rdi, rcx	; met dans rdi la len de la string a dupliquer
	mov rdi, rax

	inc rdi
	call _malloc	; sans commentaire
	cmp rax, 0
	je got_to_null	; if malloc == NULL return NULL



	mov rdx, rdi
	mov rdi, rax	; set first param (retour de malloc dans rdi)
	pop rsi			; set secnd param (pop rdi dans rsi)
	;mov rdx, rcx	; set third param (retour de strlen dans rdx)
	call _ft_memcpy

	ret

got_to_null:
	mov rax, 0 ; return NULL
	ret
