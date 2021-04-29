		global _ft_read
		extern ___error

				section		.text
_ft_read:		mov			rax, 0x02000003
				syscall
				jc			issue
				ret
issue:			mov         rdi, rax
				call		___error
				mov			[rax], rdi
				mov			rax, -1
				ret