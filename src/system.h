#ifndef SYSTEM_H
#define SYSTEM_H

// Syscalls and the like
// RATIONALE:
// 1. Cross portability
// 2. Dependency Independence
// 3. I'm on a low level bender at the moment and inline assembly is friggin awesome

extern void read(int __fd, char* buf, int __n);
extern void write(int __fd, const void* __buf, int __n);
extern void exit(int __error_code);

#endif
