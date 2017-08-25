global _ft_puts_fd

extern _ft_strlen

section .data
str:
	.string db "", 10
	.null db "(null)", 10

section .text

_ft_puts_fd:
	cmp rdi, 0
	je print_null
	mov r10, rsi	; sauvegarde du fd
	call _ft_strlen
	mov r8, rax		; stock in r8 len
	mov r9, rdi		; stock in r9 string

	mov rax, 0x2000004	; write syscall
	mov rdi, r10		; passing fd 1 in first param
	mov rsi, r9			; passing str in second param
	mov rdx, r8			; passing len in third param
	syscall

	cmp rax, -1
	je failure

	mov rax, 0x2000004				; write syscall
	mov rdi, r10					; passing fd 1 in first param
	lea rsi, [rel str.string] ; adding line feed
	mov rdx, 1						; passing len in third param
	syscall							; write sysall

	ret

print_null:
	mov rax, 0x2000004				; write syscall
	mov rdi, 2						; passing fd 1 in first param
	lea rsi, [rel str.null] ; adding line feed
	mov rdx, 7						; passing len in third param
	syscall							; write sysall
	ret

failure:
	ret
