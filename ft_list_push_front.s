		global _ft_list_push_front
		global _ft_create_element
		extern _malloc
		extern ___error

					section		.text
_ft_list_push_front:	
						push 	rdi
						mov		rdi, rsi
						call	_ft_create_element
						cmp		rax, -1
						je		issue
						pop		rdi 
						mov		r8, [rdi]
						mov		[rax + 8], r8
						mov		[rdi], rax
						mov		rax, 0
						ret
_ft_create_element:		
						push	rdi
						mov		rdi, 16
						call	_malloc
						cmp		rax, 0
						je		issue
						pop 	rdi
						mov		[rax] ,rdi
						mov		qword[rax + 8], 0
						ret
issue:					
						mov		rax, -1
						ret
