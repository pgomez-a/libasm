; size_t	strlen(const char *s)

		global	_ft_strlen			; entrypoint is in _ft_strlen
		section	.text
_ft_strlen:
		mov		rax, rdi			; rax is used to advance in s
.count:
		cmp		byte [rax], 0x00	; if rax[x] == NULL, end is reached
		je		.end
		inc		rax					; if rax[x] != NULL, goto next byte
		jmp		.count				; repeat loop
.end:
		sub		rax, rdi			; &rax - &rdi == rax --> return value
		ret
