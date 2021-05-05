		global	_ft_strlen

				section		.text
_ft_strlen:		
				mov			rax, 0
while1:			
				cmp			byte[rdi + rax], 0
				je			endwhile1
				inc			rax
				jmp 		while1
endwhile1:		
				ret