#include <iostream>
using namespace std;

//function to calculate the area of a suare
int calculateArea(int side){
    int results = side * side;
    return results;
}

//function to calculate the area of acircle
double calculateArea(double radius){
    double results = (3.14*(radius*radius));
    return results;
}

//function to calculate the area of a rectangle
double calculateArea(double length, double width){
    double results = (length * width);
    return results;
}

int main(){
    //variables to store the users input.
    int side;
    double radius,length,width;
    cout << "Enter the side of an area: ";
    cin >> side;

    cout << "Enter the radius of an area: ";
    cin >> radius;


    cout << "Enter the length of a rectangle: ";
    cin >> length;
    cout << "Enter the width of a rectangle: ";
    cin >> width;


    cout << "The area of the square: " << calculateArea(side) << endl;
    cout << "The area of the circle: " << calculateArea(radius) << endl;
    cout << "The area of the rectangle: " << calculateArea(length,width) << endl;


    return 0;

    
}
