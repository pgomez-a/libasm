%include "ft_strlen.s"

section	.text
global	_ft_write

_ft_write:
	push	rdi
	push	rsi
	push	rdx

	cmp		rdx, 0
	jl		.end

	mov		rdx, rdx
	mov		rsi, rsi
	mov		rdi, rdi
	mov		rax, 0x2000004
	syscall

	pop		rdx
	pop		rsi
	pop		rdi
	ret

.end:
	mov		rax, -1
	pop		rdx
	pop		rsi
	pop		rdi
	ret
