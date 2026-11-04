//create a class named Patient with public attributes patientName , age and patientID
//define two member functions checkPriority() to display priority patient if the patient's age is 60 and above otherwise regular patient 
//and displayPatient() to display patient information
//in main() create three patient object prompt the user to enter their details and display their information and priority status


#include <iostream>
using namespace std;

class Patient {
	public:
		string patientName;
		int age;
		string patientID;
		
		//setter function for name
		void setPatientName(string newName){
			patientName = newName;
		}
		
		//getter function for name
		string getPatientName(){
			return patientName;
		}
		
		//setter function for age
		void setAge(int newAge){
			age = newAge;
		}
		
		//getter function for age
		int getAge(){
			return age;
		}
		
		
		//setter function for id
		void setPatientID(string newID){
			patientID = newID;
		}
		
		//getter function for id
		string getPatientID(){
			return patientID;
		}
		
	
		
		void checkPriority(){
			if (age>=60){
				cout << "Priority patient" << endl;
			}
			else{
				cout << "Regular Patient" << endl;
			}
		}
		
		void displayPatient(){
			cout << "Patient's Name: " << patientName << endl;
			cout << "Patient's age: " << age <<endl;
			cout << "Patient ID: " << patientID << endl;
			cout << "Priority status: " ;
			checkPriority() ;
			
		}
};


//main function
int main(){
	string name,patientid;
	int age;
	cout << "Enter your name: ";
//	cin >> name;
    getline(cin,name);
	cout << "Enter your age: ";
	cin >> age;
	cin.ignore();
	//because the next line is using getline and to clear the newline butter so the next getline works
	cout << "Enter your patientID: ";
//	cin >> patientid;
    getline(cin,patientid);

	
	
	Patient patient1;
	patient1.setPatientName(name);
	patient1.setAge(age);
	patient1.setPatientID(patientid);
	
	patient1.displayPatient();
	
	
	
	
	
	return 0;
}