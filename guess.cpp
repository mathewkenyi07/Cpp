#include <iostream>
using namespace std;

int main(){
    int num;
    int guess = 7;
    do {
    cout << "Enter a number between 1 and 10 : ";
    cin >> num;
    }
    while(num != guess); cout<< "You guessed the number";

    return 0;
}

