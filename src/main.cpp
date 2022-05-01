#include "system.h"
#include "byte.h"

#define HEAP_SIZE 640000 // ought to be enough for everyone

byte heap[HEAP_SIZE] = {0};

byte r1, r2, r3, r4;

int main() {
    write(1, "Hello, world!\n", 15);
    return 0;
}
