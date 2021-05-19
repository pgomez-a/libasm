section	.text
global	_ft_read

_ft_read:
	push	rdx
	push	rsi
	push	rdi

	cmp		rdx, 0
	jl		.end

	mov		rdx, rdx
	mov		rsi, rsi
	mov		rdi, 1
	mov		rax, 0x2000003
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
