#include <unistd.h>

int main() {
    write(1, "Hello, world!\n", 15);

    return 0;
}
