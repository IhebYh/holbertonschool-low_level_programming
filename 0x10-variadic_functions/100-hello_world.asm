	section .data
	msg db "Hello world",10
	section .text
	global main
main:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 13
	syscall
