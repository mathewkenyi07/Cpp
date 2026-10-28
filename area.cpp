#include <iostream>
using namespace std;

// function to calculate the area

double calculateArea(double x, double y){
    return x*y;
}

int main(){
    double a,b;
    cout << "Enter the length: ";
    cin >> a;
    cout << "Enter the width: ";
    cin >> b;

    double area = calculateArea(a,b);
    cout << "The area is: "<< area;

    return 0;
}
