#include <iostream>
#include <string>

using namespace std;

//define class employee as the blueprint

class Employee {
    private:
    string name;
    string employeeID;
    int salary;

    public:

    //setter function for name
    void setName(string newName){
        name = newName;
    }

    //getter function for name
    string getName(){
        return name;
    }

    //setter function for employeeID
    void setEmployeeID(string newID){
        employeeID = newID;
    }

    //getter function for employeeID
    string getEmployeeID(){
        return employeeID;
    }

    //setter function for salary
    void setSalary(int newSalary){
        salary = newSalary;

    }

    //getter function for salary
    int getSalary(){
        return salary;
    }
};




int main(){
    Employee employee1;

    // employee1.setName("Mathew");
    // employee1.setEmployeeID("M0012");
    // employee1.setSalary(10000000);
    string tempName,tempID;
    int tempSalary;

    cout << "Enter your name: " << endl;
    getline(cin, tempName);
    employee1.setName(tempName);

    cout << "Enter your EmployeeID: " << endl;
    getline(cin,tempID);
    employee1.setEmployeeID(tempID);

    cout << "Enter your salary: " << endl;
    cin >> tempSalary;
    employee1.setSalary(tempSalary);

    cout << "Employee's name: " << employee1.getName() << endl;
    cout << "Employee ID: " << employee1.getEmployeeID() << endl;
    cout << "Employee's Salary: " << employee1.getSalary() << endl;


    return 0;
}