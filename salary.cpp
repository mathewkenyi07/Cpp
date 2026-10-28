#include <iostream>
using namespace std;

double calculateNetSalary(double gross){
    double results = (gross - (gross*0.1));
    return results;
}

int main(){
    double salary;
    cout << "Enter gross salary: ";
    cin >> salary;

    double netSalary = calculateNetSalary(salary);
    cout << "Your net salary is : "<< netSalary;
    return 0;
}