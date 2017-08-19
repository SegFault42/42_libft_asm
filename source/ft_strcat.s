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
	cmp byte[rsi], 0
	je end
	mov r9, [rsi]
	mov [rdi], r9
	inc rsi
	inc rdi
	jmp copy_str

end:
	mov [rdi], byte 0
	mov rax, rdi
	ret
