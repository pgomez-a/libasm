# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 13:24:29 by pgomez-a          #+#    #+#              #
#    Updated: 2021/05/21 13:27:43 by pgomez-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
