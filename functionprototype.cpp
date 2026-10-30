#include <iostream>
using namespace std;

//function prototype
double sum(double x, double y);



//main function

int main(){
    double x,y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "The sum is:" << sum(x,y);
    return 0;
}




//prototype implementation

double sum(double x, double y){
    return x + y;
}