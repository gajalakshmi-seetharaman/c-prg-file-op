# Simple Makefile for beginners
CC = gcc
CFLAGS = -Wall

# Build all programs
all: file_ops mean_age numbers

# Build file operations program
file_ops:
	$(CC) $(CFLAGS) -o file_ops main.c

# Build mean age program
mean_age:
	$(CC) $(CFLAGS) -o mean_age mean_age.c

# Build numbers program
numbers:
	$(CC) $(CFLAGS) -o numbers numbers.c

# Clean everything
clean:
	rm -f file_ops mean_age numbers even.txt odd.txt

# Run file operations program
run: file_ops
	./file_ops

# Run mean age program
run-mean: mean_age
	./mean_age

# Run numbers program
run-numbers: numbers
	./numbers
