CC = gcc
CLFLAGS = -O2
OBJS = $(wildcard src/*.c) $(wildcard src/*.h)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

main: $(OBJS)
	$(CC) $(CFLAGS) -o tinyvm $^

clean:
	rm -f *.o
	rm -f tinyvm
