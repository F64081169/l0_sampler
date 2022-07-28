CC = g++
CFLAGS = -g -Wall -ansi

all: main.o graph.o
	$(CC) -o l0Sampler main.o graph.o
main.o: main.cpp main.h
	$(CC) $(CFLAGS) -c main.cpp
clean:
	rm  *.o l0Sampler