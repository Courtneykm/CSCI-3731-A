#include "Planet.h"

Planet::Planet(){
	
} // END OF CONTRUCTOR

Planet::Planet(double M , double radius){
	
	this-> M = M;
	this -> radius = radius;
	
}	//CONSTRUCTOR

Planet::~Planet(){
}

double Planet::getM() const{
	return M;
} //GET M

double Planet::getradius() const{
	return radius;
} //GET RADIUS

void Planet::set(double M , double radius){
	this-> M = M;
	this -> radius = radius;
} //SET METHOD

const double Planet::G
