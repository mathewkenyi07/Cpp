#include <iostream>

using namespace std;

//define a template or class

class StudentRegistration {

    private:
    //attributes
    string name;
    int age;
    string regNo;

    public:

    void setName(string newName){
        name = newName;
    }

    string getName(){
        return name;
    }

    void setAge(int newAge){
        age = newAge;
    }

    int getAge(){
        return age;
    }

    void setReg(string newReg){
        regNo = newReg;

    }

    string getReg(){
        return regNo;
    }

};


int main(){
    //create an instance of the class
    StudentRegistration student1;
    StudentRegistration student2;
    StudentRegistration student3;
    
    //student 1
    student1.name = "Mathew";
    student1.age = 20;
    student1.regNo = "250534232";

    //student 2
    student2.name = "Isaac";
    student2.age = 20;
    student2.regNo = "223534232";


    //student 3
    student3.setName("Laku");
    student3.setAge(30);
    student3.setReg("7584847");


    // print student 1 to the console

    cout << "Name :" << student1.name << endl;
    cout << "Age : " << student1.age << endl;
    cout << "Regnumber: " << student1.regNo << endl;
    cout << "===========================================" << endl;

    // print student 2 to the console

    cout << "Name :" << student2.name << endl;
    cout << "Age : " << student2.age << endl;
    cout << "Regnumber: " << student2.regNo << endl;
    cout << "===========================================" << endl;


    // print student 3 to the console

    cout << "Name :" << student3.getName() << endl;
    cout << "Age :" << student3.getAge() << endl;
    cout << "Regnumber: " << student3.getReg() << endl;
    cout << "===========================================" << endl;








    return 0;
}