#include "vector.h"

vector::vector(){
	
} // END OF CONTRUCTOR

vector::vector(double x, double y, double z){
	
	this->x=x;
	this-> y=y;
	this-> z=z;
	
}//	END OF CONSTRUCTOR

vector::~vector(){
}

double vector::getx() const{
	return x;
} //END OF GET X

double vector::gety() const{
	return y;
} //END OF GET Y

double vector::getz() const{
	return z;
} //END OF GET Z

void vector::set(double x, double y, double z){
	
	this->x=x;
	this-> y=y;
	this-> z=z;
	
}// END OF SET METHOD