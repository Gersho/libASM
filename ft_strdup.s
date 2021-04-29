		global _ft_strdup
		extern _malloc
		extern ___error
		extern _ft_strlen
		extern _ft_strcpy

				section		.text
_ft_strdup:		push		rdi
				call		_ft_strlen
				mov			rdi, rax
				inc			rdi
				call		_malloc			;rax has s2 ptr
				cmp			rax, 0
				je			issue
				mov			rdi, rax
				pop			rsi
				call		_ft_strcpy
				ret
issue:			mov			rax, -1
				ret