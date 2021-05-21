# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strdup.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 13:15:07 by pgomez-a          #+#    #+#              #
#    Updated: 2021/05/21 13:24:05 by pgomez-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; char	*strdup(const char *s1)

		global	_ft_strdup			; entrypoint is in _ft_strdup
		extern	_malloc				; functions that will be used
		extern	___error
		section	.text
_ft_strdup:
		push	rdi					; store value of s1 before using malloc
		call	.strlen
		mov		rdi, rax
		call	_malloc				; allocate dynamic memory -> rdi == size
		jc		.error				; if carry flag is set, go to error
		pop		rdi
		mov		rcx, rax			; rcx will be use to advance in s1
.loop:
		cmp		byte [rdi], 0x00	; like ft_strcpy
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
		pop		rdi
		mov		rcx, rax			; store code error returned by malloc
		call	___error			; get errno address
		mov		[rax], rcx			; set errno with code error
		mov		rax, -1				; return 1 to indicate error
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
