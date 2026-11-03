#include <iostream>
using namespace std;

//parent class for both student and employee
class Person {
    private:
    string name;
    int age;
    string email;

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

//getter function for age

int getAge(){
    return age;
}

//setter function for email
void setEmail(string newEmail){
    email = newEmail;
}

//getter function for email
string getEmail(){
    return email;
}

};

class Employee : public Person {
    private:
    string employeeID;
    string department;
    string salary;


    public:
    
    //setter function for employeeID
    void setEmployeeID(string newEmployeeID){
        employeeID = newEmployeeID;
    }

    //getter function for employeeID
    string getEmployeeID(){
        return employeeID;
    }

    //setter function for department
    void setDepartment(string newDepartment){
        department = newDepartment;
    }

     //getter function for department
    string getDepartment(){
        return department;
    }

    //setter function for salary
    void setSalary(string newSalary){
        salary = newSalary;
    }

     //getter function for salary
    string getSalary(){
        return salary;
    }


};



// student class

class Student : public Person {
    private:
    string regNo;
    string program;

    public:

    //setter function for regNO
    void setRegNO(string newReg){
        regNo = newReg;
    }

    //getter function for regNO
    string getRegNO(){
        return regNo;
    }

    //setter function for program
    void setProgram(string newProgram){
        program = newProgram;
    }

    //getter function for program
    string getProgram(){
        return program;
    }

    

};

int main(){
    Employee employee1;
    employee1.setName("Matt");
    employee1.setAge(20);
    employee1.setEmail("matt@gmail.com");
    employee1.setEmployeeID("SS2324");
    employee1.setDepartment("IT support");
    employee1.setSalary("1000,0000");


    Student student1;
    student1.setName("Madit");
    student1.setAge(22);
    student1.setEmail("madit@gmail.com");
    student1.setRegNO("23475847");
    student1.setProgram("computer science");



    cout << "Employee name: " << employee1.getName() << endl;
    cout << "Employee age: " << employee1.getAge() << endl;
    cout << "Employee email: " << employee1.getEmail() << endl;
    cout << "Employee employeeID: " << employee1.getEmployeeID() << endl;
    cout << "Employee department: " << employee1.getDepartment() << endl;
    cout << "Employee salary: " << employee1.getSalary() << endl;
    cout << "===================================================" << endl;


    



    cout << "Student name: " << student1.getName() << endl;
    cout << "Student age: " << student1.getAge() << endl;
    cout << "Student email: " << student1.getEmail() << endl;
    cout << "Student RegNo: " << student1.getRegNO() << endl;
    cout << "Student Program: " << student1.getProgram() << endl;



return 0;

}