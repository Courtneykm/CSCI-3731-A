#include <cstdio>
#include<cmath>
#include "header.h"

double range(double theta, int** array, int width, int height){
	
	//fil array with spaces
	for (int j=0; j<height; j++){
		for(int i=0; i<width; i++){
			array[j][i] = 32;
		}//END FOR
	}//END FOR
	
	double x = 0.0;
	double y = 0.0;
	
	double t=0.0;
	double vx=0.0;
	double vy=0.0;
	double ax=0.0;
	double ay=0.0;
	double v =0.0;
	double dt = 0.1;
	
	double vo = 250.0;
	double m = 30.0;
	double Cd = 0.45;
	double A = 0.03;
	double p = 1.2;
	
	double g = 9.8;
	
	vx = vo * cos(theta * (M_PI/180.0));
		
	vy = vo * sin(theta * (M_PI/180.0));
		
	
	double yUnscaled = 0.0;
	double xUnscaled = 0.0;
	
	
	while (y >= 0){
		
		v = sqrt( (vx*vx) + (vy*vy) );
		
		double D = (1.0/2.0 * Cd * A * p * (v*v))/m;
		
		ax = (-D * vx)/v;
		ay = -g - (D * vy)/v;
		
		x += vx*dt;
		y += vy*dt;
		
		vx += ax*dt;
		vy += ay*dt;
		
		t += dt;
		
		//scale down 
		yUnscaled = y;
		xUnscaled = x;
		yUnscaled /= 100;
		xUnscaled /= 100;
		
		//cast to ints
		int yScaled = (int) yUnscaled;
		int xScaled = (int) xUnscaled;
		
		//flip
		int canonY = height - yScaled;
		int canonX = xScaled;
		
		//printf("Height: %d \nWidth: %d \nArray [%d][%d] \n", yScaled, xScaled , canonY , canonX);
		
		//check if array is out of bounds
		if (canonX >= 0 && canonX < width && canonY >= 0 && canonY < height){
		
		array[canonY][canonX] = 42; //Canonball char
		
		}
		
	}//END WHILE
	
	//canon shot print 
	for (int j=0; j<height; j++){
		for(int i=0; i<width; i++){
			printf("%c" , array[j][i]); 
		}//END FOR
		printf("\n");
	}//END FOR
	
	return 0;
		
	
}//END RANGE