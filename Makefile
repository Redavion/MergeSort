# Complete this Makefile
# Your "all" target should build an executable named "driver" using linkedlist.c, mergesort.c and driver.c

CFLAGS=-std=c99 -Wall

all: hello

hello: linkedlist.o mergesort.o driver.o
	gcc $(CFLAGS) linkedlist.o mergesort.o driver.o -o driver

linkedlist.o: linkedlist.c
	gcc -c $(CFLAGS) linkedlist.c

mergesort.o: mergesort.c
	gcc -c $(CFLAGS) mergesort.c

driver.o: driver.c
	gcc -c $(CFLAGS) driver.c

clean: rm *.o driver