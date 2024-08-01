section .data
hello db "Hello, Holberton", 0   ; String to print
section .text
global _start
extern printf

_start:
; Set up the arguments for printf
mov rdi, hello     ; The first argument is the format string
xor rax, rax       ; Clear rax to indicate there are no floating point argument
; Call printf
call printf
; Exit the program
mov rax, 60        ; syscall: exit
xor rdi, rdi       ; status: 0
syscall

