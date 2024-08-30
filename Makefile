all: main

main: main.o bitboard.o
	g++ -Wall -o main main.o bitboard.o

main.o: bitboard.h
	g++ -Wall -c main.cpp

bitboard.o: bitboard.h bitboard.cpp
	g++ -Wall -c bitboard.cpp

clean:
	rm -f main *.o
