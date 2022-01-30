all: main2
	
range.o: range.cc range.h
	g++ -c -Wall -Werror range.cc

main.o: main2.cc range.h
	g++ -c -Wall -Werror main2.cc
	
main2: main2.o range.o
	g++ -o main2 main2.o range.o