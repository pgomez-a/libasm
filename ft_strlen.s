section	.text
global	_ft_strlen

_ft_strlen:
	mov		rax, rdi

.count:
	cmp		byte [rax], 0x00
	je		.end
	inc		rax
	jmp		.count

.end:
	sub		rax, rdi
	ret
