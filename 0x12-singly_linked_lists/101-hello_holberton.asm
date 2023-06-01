; Declare needed C  functions

section .data                    ; msg: db "Hello, Holberton", 0
                                 ; fmt: db "%s", 0

section .text                    ; extern printf

global _start
       _start:
sub rsp, 8                       ; Align the stack

mov rdi, fmt                  ; set the format string
mov rsi, msg                   ; set the address of the hello string
xor eax, eax                     ; clear eax register
call printf                      ; call printf function


add rsp, 8                       ; restore the stack
mov eax, 60                      ; exit system call number
xor edi, edi                     ; exit status 0
syscall                         ; invoke the system call

section .bss

