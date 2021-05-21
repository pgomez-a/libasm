# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcpy.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pgomez-a <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/21 13:08:31 by pgomez-a          #+#    #+#              #
#    Updated: 2021/05/21 13:14:52 by pgomez-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

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
