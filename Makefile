CC = g++
CFLAGS = -g -Wall -ansi

all: main.o graph.o
	$(CC) -o l0Sampler main.o graph.o
main.o: main.cpp main.h
	$(CC) $(CFLAGS) -c main.cpp
graph.o: graph.cpp graph.h
	$(CC) $(CFLAGS) -c graph.cpp
clean:
	rm  *.o l0Sampler