; char	*strcpy(char *dst, const char *src)

		global	_ft_strcpy			; entrypoint is in _ft_strcpy
		section	.text
_ft_strcpy:
		mov		rax, rdi			; move dst to rax (return first pos)
.count:
		cmp		byte [rsi], 0x00	; if src[x] == NULL the copy stops
		je		.end
		mov		cl, byte [rsi]		; cpy src[x] in dst[x]
		mov		byte [rdi], cl
		inc		rsi					; move to next byte and repeat loop
		inc		rdi
		jmp		.count
.end:
		mov		byte [rdi], 0x00	; terminate rdi[x] width NULL
		ret
