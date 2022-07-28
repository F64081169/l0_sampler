CC = g++
CFLAGS = -g -Wall -ansi

all: main.o 
	$(CC) -o l0Sampler main.o
main.o: main.cpp main.h
	$(CC) $(CFLAGS) -c main.cpp
clean:
	rm  *.o l0Sampler