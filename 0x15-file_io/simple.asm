global _start

section .text
_start:
    mov rax, 60         ; syscall: exit
    xor rdi, rdi        ; status: 0
    syscall             ; invoke syscall

