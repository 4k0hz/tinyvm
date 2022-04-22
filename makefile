CC = gcc
CFLAGS = -O2
SRCS = $(shell find src/ -type f -name '*.c')
OBJS = $(shell echo $(SRCS) | sed s/\\.c/\\.o/g)
SYSTEM = SYSTEM_X86_LINUX

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -D$(SYSTEM)

main: $(OBJS)
	$(CC) $(CFLAGS) -o tinyvm $^

clean:
	rm -f *.o
	rm -f tinyvm
