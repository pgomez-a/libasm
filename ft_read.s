extern	___error

section	.text
global	_ft_read

_ft_read:
	push	rdi
	push	rsi
	push	rdx

	mov		rdx, rdx
	mov		rsi, rsi
	mov		rdi, rdi 
	mov		rax, 0x2000003
	syscall

	jc		.error

	pop		rdx
	pop		rsi
	pop		rdi
	ret

.error:
	mov		rdx, rax
	call	___error
	mov		[rax], rdx
	mov		rax, -1

	pop		rdx
	pop		rsi
	pop		rdi
	ret
