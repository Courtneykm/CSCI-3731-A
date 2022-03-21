all: main7

vector.o: vector.cc vector.h
	g++ -c -Wall -Werror vector.cc

main.o: main7.cc vector.h
	g++ -c -Wall -Werror main7.cc
	
main7: main7.o vector.o
	g++ -o main7 main7.o vector.o 