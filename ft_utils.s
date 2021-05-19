;***************
;* ft_strlen.s *
;***************

ft_strlen:
	push	rbx
	mov		rbx, rax

.count:
	cmp		byte [rax], 0x00
	jz		.end
	inc		rax
	jmp		.count

.end:
	sub		rax, rbx
	pop		rbx
	ret


;**************
;* ft_putchar *
;**************

ft_putchar:
	push	rdx
	push	rsi
	push	rdi
	push	rax

	call	ft_strlen

	mov		rdx, rax
	pop		rax
	mov		rsi, rax
	mov		rdi, 1
	mov		rax, 0x2000004
	syscall

	pop		rdi
	pop		rsi
	pop		rdx
	ret

;*****************
;* ft_putnchar.s *
;*****************

ft_putnchar:
	call	ft_putnchar

	mov		rax, 0x0a
	push	rax
	mov		rax, rsp
	call	ft_putchar
	pop		rax
	ret

;*************
;* ft_user.s *
;*************

ft_user:
	call	ft_putchar

	push	rdx
	push	rsi
	push	rdi
	push	rdi

	mov		rdx, 255
	mov		rsi, buff
	mov		rdi, 0
	mov		rax, 0x2000003
	syscall

	pop		rdi
	mov		rax, rdi
	call	ft_putchar
	mov		rax, buff
	call	ft_putchar

	pop		rdi
	pop		rsi
	pop		rdx
	ret

;***********
;* ft_itoa *
;***********

ft_itoa:
	push	rcx
	push	rbx
	mov		rcx, 0
	mov		rbx, 10

.count:
	cmp		rax, 0
	jz		.print_number
	mov		rdx, 0
	idiv	rbx
	push	rdx
	add		rcx, 1
	jmp		.count

.print_number:
	cmp		rcx, 0
	jz		.end_itoa
	pop		rax
	push	rcx
	add		rax, '0'
	push	rax
	mov		rax, rsp
	call	ft_putchar
	pop		rax
	pop		rcx
	add		rcx, -1
	jmp		.print_number

.end_itoa:
	mov		rax, 0x0a
	push	rax
	mov		rax, rsp
	call	ft_putchar
	pop		rax
	pop		rbx
	pop		rcx
	ret

;***********
;* ft_exit *
;***********

ft_exit:
	mov		rdi, 0
	mov		rax, 0x2000001
	syscall
	ret

section	.bss
	buff	resb 255
