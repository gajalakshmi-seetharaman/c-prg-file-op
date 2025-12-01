# Simple Makefile for beginners
CC = gcc
CFLAGS = -Wall

# Build the program
all:
	$(CC) $(CFLAGS) -o file_ops main.c

# Clean everything
clean:
	rm -f file_ops even.txt odd.txt

# Run the program
run: all
	./file_ops
