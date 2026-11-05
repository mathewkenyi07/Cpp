#include <iostream>
using namespace std;

//base class
class Person {
    private:
    string name;
    int age;


    public:

    //setter function for name
    void setName(string newName){
        name = newName;
    }

    //getter function for name
    string getName(){
        return name;
    }

    //setter function for age
    void setAge(int newAge){
        age = newAge;
    }

    //getter function age
    int getAge(){
        return age;
    }


};

class Student : public Person {
    private:
    string regNo;
    string programOfStudy;


    public:

    //setter function regNo
    void setRegNo(string newReg){
        regNo = newReg;
    }

    //getter function for regNo
    string getRegNo(){
        return regNo;
    }

    //setter function for program of study
    void setProgram(string newProgram){
        programOfStudy = newProgram;
    }

    //getter function for program of study
    string getProgram(){
        return programOfStudy;
    }

};

//main function
int main(){
    Student student1;

    student1.setName("Mathew");
    student1.setAge(20);
    student1.setProgram("computer science");
    student1.setRegNo("25053132");

    cout << "Name: " << student1.getName() << endl;
    cout << "Age: " << student1.getAge() << endl;
    cout << "Program: " << student1.getProgram() << endl;
    cout << "RegNo: " << student1.getRegNo() << endl;

    return 0;
}