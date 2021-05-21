extern	_malloc
extern	___error

section	.text
global	_ft_strdup

_ft_strdup:
	push	rdi
	call	.strlen

	mov		rdi, rax
	call	_malloc
	jc		.error

	pop		rdi
	mov		rcx, rax

.loop:
	cmp		byte [rdi], 0x00
	je		.stop
	mov		bl, byte [rdi]
	mov		byte [rcx], bl
	inc		rdi 
	inc		rcx
	jmp		.loop

.stop:
	mov		byte [rcx], 0x00
	ret

.error:
	mov		rcx, rax
	call	___error
	mov		[rax], rcx
	mov		rax, -1
	ret

.strlen:
	mov		rax, rdi

.count:
	cmp		byte [rax], 0x00
	je		.end
	inc		rax
	jmp		.count

.end:
	sub		rax, rdi
	ret
