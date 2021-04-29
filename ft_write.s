		global _ft_write
		extern ___error

				section		.text
_ft_write:		mov			rax, 0x02000004
				syscall
				jc			issue
				ret
issue:			mov         rdi, rax
				call		___error
				mov			[rax], rdi
				mov			rax, -1
				ret