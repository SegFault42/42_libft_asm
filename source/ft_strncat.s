global _ft_strncat

section .text

_ft_strncat:
	mov r8, rdi			; copy de rdi dans r8

go_to_null_char:
	cmp byte[rdi], 0	; go to '\0'
	je copy_str
	inc rdi
	jmp go_to_null_char

copy_str:
	cmp rdx, 0	; condition d'arret
	je end
	mov r9, [rsi]		; copy de rsi (1 seul octet) dans r9
	mov [rdi], r9		; concatenation dans rdi
	inc rsi				; incrementation
	inc rdi
	dec rdx
	jmp copy_str

end:
	mov [rdi], byte 0	; ajout du '\0'
	mov rax, r8			; copy dans rax
	ret
