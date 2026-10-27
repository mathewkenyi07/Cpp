
// Write a C++ program that prompts the user to enter a postive integer (N) . The program should use a while loop to calculate and the display the sum of all integers from 1 to N

#include <iostream>
using namespace std;
int main(){
int number = 1;
int sum,num;

cout << "Enter an interger: ";
cin >> num;


while (number <= num){
    sum = sum + number;
    number++;
}
cout << "The sum is : " << sum;

    return 0;
}