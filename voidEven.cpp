#include <iostream>
using namespace std;



void checkNumber(int num){
    if (num%2==0){
        cout << "Even";
    }
    else {
        cout << "Odd";
    }
}



int main(){
    int input;
    cout << "Enter an integer: ";
    cin >> input;
    checkNumber(input);

    return 0;
}