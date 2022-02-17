all: main5
	
range.o: range.cc header.h
	g++ -c -Wall -Werror range.cc

main.o: main5.cc header.h
	g++ -c -Wall -Werror main5.cc
	
main5: main5.o range.o
	g++ -o main5 main5.o range.o