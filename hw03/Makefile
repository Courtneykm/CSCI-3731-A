all: main3
	
range.o: range.cc range.h
	g++ -c -Wall -Werror range.cc

main.o: main3.cc range.h
	g++ -c -Wall -Werror main3.cc
	
main3: main3.o range.o
	g++ -o main3 main3.o range.o