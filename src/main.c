#include <unistd.h>

#include "byte_t.h"

#define HEAP_SIZE 640000 // ought to be enough for everyone

byte_t heap[HEAP_SIZE] = {0};

byte_t r1, r2, r3, r4, r5, r6, r7, r8;

int main() {
    write(1, "Hello, world!\n", 15);
    return 0;
}
