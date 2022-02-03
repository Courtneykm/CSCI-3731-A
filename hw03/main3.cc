#include <cstdio>

#include "range.h"

int main(){

double theta = 0.0;
double maxY=0.0;
double x = 0.0;

for (int i = 90; theta <= i; ++theta){
	
	
	range(&x, &maxY, theta);
	
	printf("Angle: %.0lf \t Distance: %lf meters \t Max height: %lf meters\n" , theta , x , maxY);
	
} //END FOR LOOP

}//END MAIN