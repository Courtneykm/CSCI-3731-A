#ifndef PLANET_H
#define PLANET_H
#include <math.h>
#include "vector.h"

class vector;

class Planet{
	
	public:
	
	static const double G = 6.67408 * pow(10.0,-11.0);
	double M = 0.0;
	double radius = 0.0;
	//auto M = 5.972 × 10^24;
	vector r;
	
	Planet();
	Planet(double M, double radius);
	virtual ~Planet();
	
	double getM() const;
	double getradius() const;
	
	void set(double M , double radius);
	
	vector acc(double M, double radius){
	bool crash = false;
	vector acc;
	
	acc.x = (G * M) / pow(r.x * r.x , 3.0/2.0)*r; 
	acc.y = (G * M) / pow(r.y * r.y , 3.0/2.0)*r; 
	acc.z = (G * M) / pow(r.z * r.z , 3.0/2.0)*r; 
	return acc;
	
	if ((r * r) < pow(radius , 2);){
		
		crash = true;
		
	} //END IF
		
	} // CALCULATE ACCELERATION DUE TO GRAVITY
	
	
};//END PLANET CLASS
#endif