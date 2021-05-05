		global _ft_list_sort

				section		.text
_ft_list_sort:	
				cmp			rdi, 0
				je			exit
				cmp			qword [rdi], 0
				je			exit
				mov			rdx, rdi
				mov			r10, rsi
				mov			r11, [rdx]
				jmp			while1
while1:			
				cmp			qword [r11 + 8], 0
				je			exit
				mov			rdi, [r11]
				mov			r9, [r11 + 8]
				mov			rsi, [r9]
				push		r9
				push		r11
				push		r10
				call		r10
				pop			r10
				pop			r11
				pop			r9
				cmp			rax, 0
				jg			swap
				mov			r11, [r11 + 8]
				jmp			while1
swap:
				mov			rdi, [r11]
				mov			r8, [r9]
				mov			[r11], r8
				mov			[r9], rdi
				jmp			resetloop
resetloop:
				mov			r11, [rdx]
				jmp			while1
exit:
				mov			rax, 0
				ret
