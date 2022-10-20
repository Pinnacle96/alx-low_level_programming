section .rodata
	format: db 'Hello, %s', 10, 0
	msg1:   db 'Holberton', 0

section .text
	extern printf
	global main

main:

        mov rdi, format
        mov rsi, msg1
        
	mov rax, 0
	call printf

	mov rax, 0
	ret
