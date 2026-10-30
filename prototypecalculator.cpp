#include <iostream>
#include <math.h>
using namespace std;

//addition definition
double addition(double x, double y);

//subtraction definition
double subtration(double x, double y);

//multiplication definition
double multiplication(double x, double y);

//division definition
double division(double x, double y);

//power definition
// double power(double x, double y);



//main functionc
int main(){
   double x,y;
   int z;
   cout << " 1.Addition\n 2.Subtration\n 3.Multiplication\n 4.Division\n 5.Power\n";
   cout << "Choose the operation: ";
   cin >> z;
   switch(z){
    case 1: 
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "The sum is:" << addition(x,y);
    break;

    case 2:
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "The subtration is:" << subtration(x,y);
    break;z;

    case 3:
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "The multiplication is:" << multiplication(x,y);
    break;

    case 4:
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "The division is:" << division(x,y);
    break;


    case 5:
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "The Power is:" << pow(x,y);
    break;

    default: cout << "You have entered an invalide operator";

   }

   
    return 0;
}


//addition implementation
double addition(double x, double y){
    return x + y;
}

//subtration implementation
double subtration(double x, double y){
    return x - y;
}

//multiplication implementation
double multiplication(double x, double y){
    return x * y;
}

//division implementation
double division(double x , double y){
    return x/y;
}

//power implementation
// double power(double x, double y){
//     return pow(x,y);
// }


