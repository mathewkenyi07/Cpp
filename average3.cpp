#include <iostream>
using namespace std;

 double average(double x, double y, double z){
    double result = (x+y+z)/3;
    return result;

    // return x + y + z;
   }

   int main(){
    double a,b,c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;

    double aver = average(a,b,c);

    cout << "The average of "<< a << ","<< b << " and " << c << " is : " << aver;

}