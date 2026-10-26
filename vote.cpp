#include <iostream>
using namespace std;
int main()
{
    // variable to store age
    int age;
    // prompt user to input their age
    cout << "Enter your age: ";
    cin >> age;

    //condition to check if age is above 18
    if (age >= 18) cout << "Your are eligible to vote";

    //else if the above the condition is false
    else  cout << "Your ineligible to vote ";
    
    return 0;
}