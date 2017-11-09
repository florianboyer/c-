CC=g++
CFLAGS = -W -Wall -ansi -pedantic
LDFLAGS=
EXEC = zooCity

all:$(EXEC)
	
zooCity: main.o  animal.o lion.o sanglier.o kangourou.o
	$(CC) -o zooCity main.o animal.o lion.o sanglier.o kangourou.o

main.o: main.cpp
	$(CC) -o main.o -c main.cpp $(CFLAGS)

animal.o: animal.cpp
	$(CC) -o animal.o -c animal.cpp $(CFLAGS)

lion.o: lion.cpp
	$(CC) -o lion.o -c lion.cpp $(CFLAGS)	

sanglier.o: sanglier.cpp
	$(CC) -o sanglier.o -c sanglier.cpp $(CFLAGS)	

kangourou.o: kangourou.cpp
	$(CC) -o kangourou.o -c kangourou.cpp $(CFLAGS)	

clean:
	rm *.o



