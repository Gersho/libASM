		global _ft_write
		extern ___error

				section		.text
_ft_write:		mov			rax, 0x02000004
				syscall
				; jc // jnc -->
				; mov			rax, 0x02000001
				; mov			rdi, 0
				; syscall 
				; call error
error: ;si jc