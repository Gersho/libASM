		global _ft_list_size

				section		.text
_ft_list_size:		
					mov		rax, 0
					cmp		rdi, 0
					je		endwhile
					inc		rax
while:				
					cmp		qword [rdi + 8], 0
					je		endwhile
					inc		rax
					mov		r8, [rdi + 8]
					mov		qword rdi, r8
					jmp		while
endwhile:			
					ret