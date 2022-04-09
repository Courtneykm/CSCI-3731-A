#ifndef SATELLITE_h
#def SATELLITE_h
class vector;
class Planet;

class Satellite{

	public:
	
	vector position;
	vector velocity;
	Planet planet;
	
	Satellite();
	Satellite(Planet planet, vector position, vector velocity);
	virtual ~Satellite();
	
	void set(Planet planet, vector position, vector velocity);
	
	void update(double t){
		vector newpos;
		vector newvel;
		
		while(t <= 0){
			
			newvel.x = velocity + (planet.acc * t);
			newvel.y = velocity + (planet.acc * t);
			newvel.z = velocity + (planet.acc * t);
			
			newpos.x = position + (velocity * t);
			newpos.y = position + (velocity * t);
			newpos.z = position + (velocity * t);
			
			t--;
		}
		
	}



}; //END SATELLITE CLASS