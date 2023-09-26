section .data
    hello db "Hello, Holberton", 10, 0   ; Null-terminated string with newline
    format db "%s", 0                   ; Format string

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    mov rsi, hello       ; Load address of hello string
    mov rdi, format      ; Load address of format string
    call printf

    pop rbp
    mov rax, 0           ; Return 0 as the program exit code
    ret

