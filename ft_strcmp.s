# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcmp.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 12:50:19 by pgomez-a          #+#    #+#              #
#    Updated: 2021/05/21 13:14:49 by pgomez-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

; int	strcmp(const char *s1, const char *s2)

		global	_ft_strcmp			; entrypoint is in _ft_strcmp
		section	.text
_ft_strcmp:
.loop:
		cmp		byte [rdi], 0x00	; if s1[x] is NULL jmp to src
		je		.src
		cmp		byte [rsi], 0x00	; if s2[x] is NULL jmp to dst
		je		.dst
		mov		bl, byte [rdi]
		mov		cl, byte [rsi]
		cmp		bl, cl				; s1[x] == s2[x] ?
		jg		.greater
		jl		.smaller
		inc		rdi					; if s1[x] == s2[x] move to next byte
		inc		rsi
		jmp		.loop
.src:
		cmp		byte [rsi], 0x00	; s2[x] == s1[x] == \0 ?
		je		.end
		jmp		.smaller
.dst:
		cmp		byte [rdi], 0x00	; s1[x] == s2[x] == \0 ?
		je		.end
		jmp		.greater
.greater:
		mov		rax, 1				; s1[x] > s2[x]
		ret
.smaller:
		mov		rax, -1				; s1[x] < s2[x]
		ret
.end:
		mov		eax, 0				; s1[x] == s2[x]
		ret
