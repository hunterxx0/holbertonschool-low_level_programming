section .text

	    global main

main:


	        mov     rdx,msglen
	        mov     rsi,msg
	        mov     rax,1
	        mov     rdi,1
	        syscall
		mov	rdi,0
	        mov     rax,60
	        syscall

section .data

	msg     db      "Hello, Holberton",0xa
	msglen     equ     $ - msg
