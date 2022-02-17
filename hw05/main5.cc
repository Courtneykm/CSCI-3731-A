#include <cstdio>
#include<cmath>
#include "header.h"

int main(){
	
		double theta;
	
		while(theta != 0){

	printf("Enter an angle: \nEnter 0 to exit: \n");
	scanf("%lf" , &theta);
	
	int height = 30;
	int width = 30;
	
	int** array = new int*[height]; //array of pointers
	
	array[0] = new int[width*height]; //allocate flat array
	
	for(int j = 1; j < height; j++){ //set pointers to the start of each row
		array[j] = array[j-1] + width;
	} //END FOR
	
	range(theta, array, width, height);
	
	delete [] *array;
	delete[] array;
	
	//printf ("\n Distance travelled: %0.2f meters \t Height: %0.1f meters \n" , x ,y);
		}//END WHILE 
		
		printf("Exited");
}//END MAIN