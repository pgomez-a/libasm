section	.text
global	_ft_strcmp

_ft_strcmp:

.loop:
	cmp		byte [rdi], 0x00
	je		.equal
	mov		bl, byte [rdi]
	mov		cl, byte [rsi]
	cmp		bl, cl
	jg		.greater
	jl		.smaller
	inc		rdi
	inc		rsi
	jmp		.loop

.equal:
	cmp		byte [rsi], 0x00
	je		.end
	mov		bl, byte [rdi]
	mov		cl, byte [rsi]
	cmp		bl, cl
	jg		.greater
	jl		.smaller

.greater:
	mov		rax, 1
	ret


.smaller:
	mov		rax, -1
	ret

.end:
	mov		eax, 0
	ret
