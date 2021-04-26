		global _ft_strcpy

			section		.text
_ft_strcpy:		mov		rcx, 0
while1:			cmp		byte[rsi + rcx], 0
				je		endwhile1
				mov 	dl, [rsi + rcx]
				mov		[rdi + rcx],dl
				inc		rcx
				jmp		while1
endwhile1:		mov 	dl, [rsi + rcx]
				mov		[rdi + rcx],dl
				mov		rax, rdi
				ret