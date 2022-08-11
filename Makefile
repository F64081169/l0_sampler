CC = g++
CFLAGS = -g -Wall -ansi

all: main.o hash.o
	$(CC) -o l0Sampler main.o murmurhash3.o
main.o: main.cpp main.h murmurhash3.h
	$(CC) $(CFLAGS) -c main.cpp
hash.o: murmurhash3.cpp murmurhash3.h
	$(CC) $(CFLAGS) -c murmurhash3.cpp
clean:
	rm  *.o l0Sampler