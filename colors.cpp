#include <iostream>
using namespace std;
int main(){
int num;
cout << "Enter a number between 1 to 4: ";
cin >> num;

switch (num){
    case 1: cout << "Red";
    break;
    case 2: cout << "Blue";
    break;
    case 3: cout << "Green";
    break;
    case 4: cout << "Yellow";
    break;
    default : cout << "Invalid color choice";
}

    return 0;
}