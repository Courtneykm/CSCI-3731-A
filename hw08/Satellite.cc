#include "Satellite.h"

Satellite::Satellite(){
	
} // END OF CONTRUCTOR

Satellite::Satellite(Planet planet, vector position, vector velocity){
	
	this->Planet=planet;
	this-> position=position;
	this-> velocity=velocity;
	
} //END OF CONSTUCTOR

Satellite::~Satellite(){
}

vector Satellite::getPlanet() const{
	return planet;
}

vector Satellite::getposition() const{
	return position;
}

vector Satellite::getvelocity() const{
	return velocity;
}

void Planet::set(Planet planet, vector position, vector velocity){
	
	this->Planet=planet;
	this-> position=position;
	this-> velocity=velocity;
	
}// END OF SET METHOD