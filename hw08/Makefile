all: main8 

vector.o: vector.cc vector.h
	g++ -c -Wall -Werror vector.cc
	
Planet.o: Planet.cc Planet.h
	g++ -c -Wall -Werror Planet.cc
	
Satellite.o: Satellite.cc Satellite.h
	g++ -c -Wall -Werror Satellite.cc

main.o: main8.cc vector.h Planet.h Satellite.h
	g++ -c -Wall -Werror main7.cc
	
main8: main8.o vector.o Planet.o Satellite.o
	g++ -o main8 main8.o vector.o Planet.o Satellite.o