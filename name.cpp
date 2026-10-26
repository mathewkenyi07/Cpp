#include <iostream>
//using namespace std as the standard library for input and output

using namespace std;

//variables
    string name;
    int age;
    int RegNo;

int main(){
    // displaying a message
    cout << "Welcome to c++ Programming \n";
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your Registration number: ";
    cin >> RegNo;

    cout <<"============================ \n";

    cout << "Your name is " << name << endl;
    cout << "Your age is " << age << "\n" << "Your Registration number is " << RegNo << endl;
    return 0;
}

//g++ filename with extension -o main 
//./main run the compiled file



