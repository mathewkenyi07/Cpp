#include <iostream>
using namespace std;

double findLargest(double x, double y, double z){
    if (x>y && x>z){
        return x;
    }
    else if (y>x && y>z){
        return y;
    }
    else{
        return z;
    }

   }

   int main(){
    double a,b,c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;

    double large = findLargest(a,b,c);

    cout << "The largest between  "<< a << ", "<< b << " and " << c << " is: " << large;

}