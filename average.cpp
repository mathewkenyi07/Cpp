#include <iostream>
using namespace std;
int main() {
    //define 3 variables to store the intergers
int a,b,c;
//ask the user to input the first number
cout << "Enter the first number: ";
cin >> a ;
// ask the user to input the second number
cout << "Enter the second number: ";
cin >> b;
// ask the user to input the third number
cout << "Enter the third number: ";
cin >> c;

//declare a variable to store the calculated average
double result = (a + b + c)/3;

// print the calculated average 
cout << "The average is: " << result  ;

return 0;
}

