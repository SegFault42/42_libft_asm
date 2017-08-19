global _ft_strcat

section .text

_ft_strcat:
	jmp go_to_null_char

go_to_null_char:
	cmp byte[rdi], 0
	je copy_str
	inc rdi
	jmp go_to_null_char

copy_str:
	cmp rsi, 0
	je end
	mov rsi, rdi
	inc rdi
	inc rsi

end:
	mov rdi, rax
	ret
