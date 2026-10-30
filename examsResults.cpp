#include <iostream>
using namespace std;


//function definition to calculate total
double calculateTotal(double a, double b, double c);

//function definition to calculate average
double calculateAverage(double a);

//function definition to display results
void displayResult();

//global variable to store averagemarks
double averagemarks;






int main(){

    double a,b,c;
    string name;
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter the first marks: ";
    cin >> a;

    cout << "Enter the second marks: ";
    cin >> b; 
    
    cout << "Enter the third marks: ";
    cin >> c;

    double totalmarks = calculateTotal(a,b,c);
    averagemarks = calculateAverage(totalmarks);


    
    cout << "Name: " << name << endl;
    cout << "Total mark: " << totalmarks << endl;
    cout << "Average: " << averagemarks << endl;
    // cout << "Final results: " << displayResult();
    cout << "Final results: ";
    displayResult();



    return 0;
}

//calculateTotal implemenation
double calculateTotal(double a, double b, double c){
    return a + b + c;
}


// calculate average implementation
double calculateAverage(double a){
    return a/3;
}

// displayResults implementation
void displayResult(){
    if (averagemarks >= 50){
        cout << "Pass";
    }
    else {
        cout << "Fail";
    }

}
