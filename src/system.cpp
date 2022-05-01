#include "system.h"

#ifdef SYSTEM_X86_LINUX

void read(int __fd, char* __buf, int __n) {
    asm("movq $0, %rax");
    asm("movq %0, %%rdi" : "=r" (__fd));
    asm("movq %0, %%rsi" : "=r" (__buf));
    asm("movq %0, %%rdx" : "=r" (__n));
    asm volatile ("syscall");
}

void write(int __fd, const void* __buf, int __n) {
    asm("movq $1, %rax");
    asm("movq %0, %%rdi" : "+r" (__fd));
    asm("movq %0, %%rsi" : "+m" (__buf));
    asm("movq %0, %%rdx" : "+r" (__n));
    asm volatile ("syscall");
}

void exit(int __error_code) {
    asm("movq $60, %rax");
    asm("movq %0, rdi" : "=r" (__error_code));
    asm volatile ("syscall");
}

#endif
