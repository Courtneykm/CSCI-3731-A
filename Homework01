#include <cstdio>

int main(){

double gravity = 9.81;
int dragCoe = 1;
int area = 1;
double airDen = 1.2;
int mass = 80;
double y = 1000.0;
double vel = 0.0;
double time = 0.0;
double acc = 0.0;

while (y >= 0){
	
	y += vel * time;
	
	vel += acc * time;
	
	acc = (-gravity + 0.5 * dragCoe * area * airDen * (vel * vel)) / mass;
	
	++time;
	
}

printf ("\n It took %lf seconds.", time);

}//END MAIN
