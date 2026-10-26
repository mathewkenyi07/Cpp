// write a program that prompts the user to enter an integer. If the number is a multple of 5, display HiFive. If the number is even , display HiEven

#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num%5==0) cout << "HiFive\n";
    if (num%2==0) cout << "HiEven";
    else cout << "The number you entered is nor a multiple of 5 or an Even number";
    return 0;

}