extern printf

SECTION .text
global main

main:

mov rdi, fmt
mov rsi, msg
mov rax, 0
call printf


mov rax, 0
ret

SECTION  .data
msg: db "Hello, Holberton", 0
fmt: db "%s", 10, 0
