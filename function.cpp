#include <iostream>
using namespace std;


// function calculating the sum;
   double sum(double x, double y){
        double result;
        return x + y;
    }

// function with three parameters

   double sum(double x, double y, double z){
    double result = x+y+z;
    return result;

    // return x + y + z;
   }



// function calculating average
double average(double x, double y){
    double avgResult = (x+y)/2;
    return avgResult;
}


    



int main(){
    // variables
    double a,b,c;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    // cout << "Enter the third number: ";
    double add = sum(a,b);
    double add3 = sum(a,b,c);
    double aver = average(a,b);
    
    cout << "The sum of "<< a << " and " << b << " is: "<< add << endl;
    cout << "The average is: "<< aver << endl;

    return 0;
}