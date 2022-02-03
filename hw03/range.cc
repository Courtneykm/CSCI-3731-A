#include <cstdio>
#include<cmath>

#include "range.h"

double range(double* x, double* maxY, double theta){
	
	*x = 0.0;
	*maxY = 0.0;
	
	double y = 0.0;
	double t=0;
	double vx=0.0;
	double vy=0.0;
	double ax=0.0;
	double ay=0.0;
	double v =0.0;
	double dt = 1;
	
	double vo = 250.0;
	double m = 30.0;
	double Cd = 0.45;
	double A = 0.03;
	double p = 1.2;
	
	double g = 9.8;
	
	vx = vo * cos(theta * (M_PI/180.0));
		
	vy = vo * sin(theta * (M_PI/180.0));
		
	
	while (y >= 0){
		
		v = sqrt( (vx*vx) + (vy*vy) );
		
		double D = (1.0/2.0 * Cd * A * p * (v*v))/m;
		
		ax = (-D * vx)/v;
		ay = -g - (D * vy)/v;
		
		*x += vx*dt;
		y += vy*dt;
		
		vx += ax*dt;
		vy += ay*dt;
		
		t += dt;
		
		if(y > *maxY){
			
			*maxY = y;
			
		}
		
	}//END WHILE
	
	return 0;
		
	
}//END RANGE