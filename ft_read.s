; ssize_t	read(int fildes, void *buf, size_t nbytes);

		global	_ft_read		; entrypoint is in _ft_read
		extern	___error		; ___error function will be used
		section	.text
_ft_read:
		push	rdi				; push before syscall to prevent losses
		push	rsi
		push	rdx
		mov		rdx, rdx
		mov		rsi, rsi
		mov		rdi, rdi 
		mov		rax, 0x2000003	; write rsi in rdi rdx bytes
		syscall
		jc		.error			; if jc is activated, an error occurred
		pop		rdx				; if no error occurred
		pop		rsi
		pop		rdi
		ret
.error:
		mov		rdx, rax		; store code of error
		call	___error		; get errno variable address
		mov		[rax], rdx		; store code error in errno
		mov		rax, -1			; return -1 to indicate an error occurred
		pop		rdx
		pop		rsi
		pop		rdi
		ret
