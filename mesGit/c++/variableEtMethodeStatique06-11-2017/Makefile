CC=g++
CFLAGS = -W -Wall -ansi -pedantic
LDFLAGS=
EXEC = zooCity

all:$(EXEC)
	
zooCity: main.o  animal.o
	$(CC) -o zooCity main.o animal.o 

main.o: main.cpp
	$(CC) -o main.o -c main.cpp $(CFLAGS)


animal.o: animal.cpp
	$(CC) -o animal.o -c animal.cpp $(CFLAGS)

clean:
	rm *.o



