global _ft_puts

extern _ft_strlen

section .data
line_feed:
	.string db "", 10

section .text

_ft_puts:
	call _ft_strlen
	mov r8, rax		; stock in r8 len
	mov r9, rdi		; stock in r9 string

	mov rax, 0x2000004	; write syscall
	mov rdi, 1			; passing fd 1 in first param
	mov rsi, r9			; passing str in second param
	mov rdx, r8			; passing len in third param
	syscall

	cmp rax, -1
	je failure

	mov rax, 0x2000004				; write syscall
	mov rdi, 1						; passing fd 1 in first param
	lea rsi, [rel line_feed.string] ; adding line feed
	mov rdx, 1						; passing len in third param
	syscall							; write sysall

	ret

failure:
	ret
