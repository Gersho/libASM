		global _ft_list_sort

				section		.text
_ft_list_sort:	push		r12		; 1 in stack
				push		r13		; 2 in stack
				push		r14		; 3 in stack
				push		r15		; 4 in stack
				mov			r12, rdi
				mov			r13, rsi
				mov			r14, [r12]
				mov			r15, r12
				jmp			while1
while1:			cmp			qword [r14 + 8], 0
				je			exit
				mov			rdi, [r14]
				mov			r9, [r14 + 8]
				mov			rsi, [r9]
				call		r13
				cmp			rax, 0
				jle			swap	; jle jge ?    ; problem here ?
				;prepare next loop
				mov			r15, r14
				mov			r14, [r14 + 8]
				jmp			while1
swap:			
				mov			r10, [r14 + 8] ;1
				mov			[r15 + 8], r10 ;1
				mov			r9, [r10 + 8];3
				mov			[r14 + 8], r9 ;3
				mov			[r10 + 8], r14 ; 2
				jmp			resetloop
		
		
		;swp r14 et son next ; need previous to change ptr netx ?

resetloop:		
				mov			r14, [r12]
				jmp			while1
exit:			pop			r15		; 3 in stack
				pop			r14		; 2 in stack
				pop			r13		; 1 in stack
				pop			r12		; 0 in stack
				mov			rax, 0
				ret
