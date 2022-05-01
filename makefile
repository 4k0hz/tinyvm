CC = gcc
CXX = g++
CFLAGS = -O2
SRCS = $(shell find src/ -type f -name '*.c')
OBJS = $(shell echo $(SRCS) | sed s/\\.c/\\.o/g)
SYSTEM = SYSTEM_X86_LINUX

%.o : %.c
	$(CXX) $(CFLAGS) -c $< -o $@ -D$(SYSTEM)

main: $(OBJS)
	$(CXX) $(CFLAGS) -o tinyvm $^

clean:
	rm -f *.o
	rm -f tinyvm
