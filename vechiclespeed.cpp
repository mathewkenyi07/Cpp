//define class named vehicle with public attributes plateNumber, driverName and speed
//create a member function checkSpeed() that displays overspeeding if the speed exceeds 80km/hr otherwise display within speed limit
//in main() create three vechicle objects assign their therir details and check their speeds


#include <iostream>
using namespace std;

class Vehicle {
	public:
		string plateNumber;
		string driverName;
		double speed;
		
		
	//setter function for plateNumber
	void setPlateNumber(string newPlate){
		plateNumber = newPlate;
	}	
	
	//getter function for plateNumber
	string getPlateNumber(){
		return plateNumber;
	}
	
	//setter function for driver name
	void setDriverName(string newName){
		driverName = newName;
	}
	
	//getter function for driver name
	string getDriverName(){
		return driverName;
	}
	
	//setter function for speed
	void setSpeed(double newSpeed){
		speed = newSpeed;
	}
	
	//getter function for speed
	double getSpeed(){
		return speed;
	}
	
	//checkspeed function
	void checkSpeed(){
		cout << "Driver: " << driverName <<endl<< "PlateNumber: " << plateNumber <<endl<< "Speed: " << speed << endl;

		if (speed > 80){
			cout << "Overspeeding" << endl;
			cout << "============================" << endl;
		}
		else{
			
			cout << "Within speed limit" << endl;
			cout << "============================" << endl;
		}
	}
};


//main function
int main(){
	Vehicle vehicle1;
	Vehicle vehicle2;
	Vehicle vehicle3;
	
	vehicle1.setDriverName("Matt");
	vehicle1.setPlateNumber("SSD 001");
	vehicle1.setSpeed(160);
	vehicle1.checkSpeed();
	
	vehicle2.setDriverName("Ladu");
	vehicle2.setPlateNumber("SSD 002");
	vehicle2.setSpeed(70);
	vehicle2.checkSpeed();

	
	vehicle3.setDriverName("Enzo");
	vehicle3.setPlateNumber("SSD 003");
	vehicle3.setSpeed(79);
	vehicle3.checkSpeed();

	
	
	return 0;
}