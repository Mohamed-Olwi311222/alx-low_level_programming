section .data
    hello db 'Hello, Holberton!', 10  ; define the string to print with a newline character

section .text
    global _start

_start:
    ; print the string to the console
    mov rax, 1         ; system call for "write"
    mov rdi, 1         ; file descriptor for stdout
    mov rsi, hello     ; pointer to the string to print
    mov rdx, 18        ; number of bytes to write
    syscall            ; make the system call

    ; exit the program
    mov rax, 60        ; system call for "exit"
    xor rdi, rdi       ; return code of 0
    syscall            ; make the system call
