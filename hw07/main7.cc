#include <iostream>
#include "vector.h"

int main(){
	//CODE IS MESSY AND LATE BECAUSE I FINALLY GOT IT WORKING LAST MINUTE BUT I SHALL FIX IT THANK YOU!
	double db = 2.0;
	
	double total5_db = 0.0;

	vector r1, r2;
	vector& x1 = r1;
	vector x2 = r2;
	x1.set(10.0,20.0,30.0);
	x2.set(10.0,20.0,30.0);
	
	vector total = r1 + r2;
	vector total2 = r1 - r2;
	vector total3 = x1 += x2;
	
	x1.set(10.0,20.0,30.0);
	x2.set(10.0,20.0,30.0);
	
	vector total4 = x1 *= db;
	
	x1.set(10.0,20.0,30.0);
	x2.set(10.0,20.0,30.0);
	
	vector total5 = r1 * r2;

	std::cout << total.x << " , " << total.y << " , " << total.z << std::endl; 
	std::cout << total2.x << " , " << total2.y << " , " << total2.z << std::endl; 
	std::cout << total3.x << " , " << total3.y << " , " << total3.z << std::endl; 
	std::cout << total4.x << " , " << total4.y << " , " << total4.z << std::endl; 
	std::cout << total5.x << std::endl; 
	
} //END MAIN