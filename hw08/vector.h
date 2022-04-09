#ifndef VECTOR_H
#define VECTOR_H

class vector {

public:

	double x = 0.0;
	double y = 0.0;
	double z = 0.0;

	vector();
	vector(double x, double y, double z);
	virtual ~vector();
	
	double getx() const;
	double gety() const;
	double getz() const;
	
	void set(double x, double y, double z);
	
	vector operator + (vector value){
		
		vector new_value;
		new_value.x = x + value.x;
		new_value.y = y + value.y;
		new_value.z = z + value.z;
		return new_value;
		
	}
	
	vector operator - (vector value){
		
		vector new_value;
		new_value.x = x - value.x;
		new_value.y = y - value.y;
		new_value.z = z - value.z;
		return new_value;
		
	}
	
	vector operator += (vector value){
		
		vector new_value;
		new_value.x = x += value.x;
		new_value.y = y += value.y;
		new_value.z = z += value.z;
		return new_value;
		
	}
	
	vector operator *= (double value){
		
		vector new_value;
		new_value.x = x *= value;
		new_value.y = y *= value;
		new_value.z = z *= value;
		return new_value;
		
	}
	
	vector operator * (vector value){
		
		vector new_value;
		new_value.x = x * value.x;
		new_value.y = y * value.y;
		new_value.z = z * value.z;
		new_value.x = (value.x * value.x) + (value.y * value.y) + (value.z*value.z);
		return new_value;
		
	}


}; //END VECTOR CLASS

#endif