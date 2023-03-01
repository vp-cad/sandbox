.PHONY: all clean run

RM=rm -f

CC=gcc
ISS=

SRCDIR=../src

all:
	$(CC) $(CFLAGS) -c $(SRCDIR)/main.cc
	$(CC) -o test main.o

clean:
	$(RM) test main.o

run:
	$(ISS) ./test
