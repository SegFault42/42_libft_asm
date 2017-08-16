global _ft_bzero

section .text

_ft_bzero:
	cmp rdi, 0
	je end
	cmp rsi, 0
	je end

	mov rbx, rdi
	mov rax, rsi

	mov byte[rbx], 0
	inc rbx
	dec rax
	jmp _ft_bzero

end:
	ret
