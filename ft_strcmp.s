		global _ft_strcmp

			section		.text
_ft_strcmp:		mov		rcx, 0
while1:			mov		dl, [rdi + rcx]
				cmp		dl, [rsi + rcx]
				jne		endwhile1
				cmp		dl, 0
				je		endwhile1
				inc		rcx
				jmp		while1
endwhile1:		sub 	dl, [rsi + rcx]
				mov		rax, rdx
				ret