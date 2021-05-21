# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_write.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 13:27:50 by pgomez-a          #+#    #+#              #
#    Updated: 2021/05/21 13:31:42 by pgomez-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; ssize_t	write(int fildes, const void *buf, size_t nbyte)

		global	_ft_write		; entrypoint is in _ft_write
		extern	___error		; ___error function will be used
		section	.text
_ft_write:
		push	rdi				; push before syscall to preven losses
		push	rsi
		push	rdx
		mov		rdx, rdx
		mov		rsi, rsi
		mov		rdi, rdi
		mov		rax, 0x2000004	; read in rdi rdx bytes and store in rsi
		syscall
		jc		.error			; if jc is set, an error occurred
		pop		rdx
		pop		rsi
		pop		rdi
		ret
.error:
		mov		rdx, rax		; store code of error
		call	___error		; get errno variable addres
		mov		[rax], rdx		; store code error in errno
		mov		rax, -1			; return -1 to indicate an error occurred
		pop		rdx
		pop		rsi
		pop		rdi
		ret
