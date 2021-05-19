section	.text
global	_ft_strcpy

_ft_strcpy:
	mov		rax, rdi

.count:
	cmp		byte [rsi], 0x00
	je		.end
	mov		cl, byte [rsi]
	mov		byte [rdi], cl
	inc		rsi
	inc		rdi
	jmp		.count

.end:
	mov		byte [rdi], 0x00
	ret
