#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int operant;
    // declare two variables to the store the input from the user
    double first, second;
    cout << " 1.Addition\n 2.Substraction\n 3.Multiplication\n 4.Division\n 5.Sin(x)\n 6.Cos(x)\n 7.Tan(x)\n 8.Exp(x)\n 9.Log10(x)\n 10.Pow(a,b)\n 11.ceil\n 12.floor\n 13.sqrt\n 14.abs\n 15.min\n 16.max\n";
    cout << "Which operation do you want to perform: ";
    cin >> operant;

    switch (operant)
    {
    case 1:
        cout << "Enter the first number: ";
        cin >> first;
        cout << "Enter the second number: ";
        cin >> second;
        cout << "The addition of " << first << " and " << second << " is " << first + second;
        break;

    case 2:
        cout << "Enter the first number: ";
        cin >> first;
        cout << "Enter the second number: ";
        cin >> second;
        cout << "The subtraction of " << first << " and " << second << " is " << first - second;
        break;

    case 3:
        cout << "Enter the first number: ";
        cin >> first;
        cout << "Enter the second number: ";
        cin >> second;
        cout << "The multiplication " << first << " and " << second << " is " << first * second;
        break;

    case 4:
        cout << "Enter the first number: ";
        cin >> first;
        cout << "Enter the second number: ";
        cin >> second;
        cout << "The division is " << first << " and " << second << " is " << first / second;

    case 5:
        cout << "Enter the number: ";
        cin >> first;
        cout << "The sin of " << first << " is " << sin(first);
        break;

    case 6:
        cout << "Enter the number: ";
        cin >> first;
        cout << "The Cos of " << first << " is " << cos(first);
        break;

    case 7:
        cout << "Enter the number: ";
        cin >> first;
        cout << "The Tan of " << first << " is " << tan(first);
        break;

    case 8:
        cout << "Enter the number: ";
        cin >> first;
        cout << "The Expo of " << first << " is " << exp(first);
        break;

    case 9:
        cout << "Enter the number: ";
        cin >> first;
        cout << "The  Log10 of " << first << " is " << log10(first);
        break;

    case 10:
        cout << "Enter the  number: ";
        cin >> first;
        cout << "Enter the power: ";
        cin >> second;
        cout << first << " pow " << second << " is " << pow(first, second);
        break;

    case 11:
        cout << "Enter the number: ";
        cin >> first;
        cout << "The  ceil of " << first << " is " << ceil(first);
        break;

    case 12:
        cout << "Enter the number: ";
        cin >> first;
        cout << "The  floor of  " << first << " is " << floor(first);
        break;

    case 13:
        cout << "Enter the number: ";
        cin >> first;
        cout << "The  Log10 of " << first << " is " << sqrt(first);
        break;

    case 14:
        cout << "Enter the number: ";
        cin >> first;
        cout << "The  Absolute value of " << first << " is " << abs(first);
        break;

    case 15:
        cout << "Enter the first number: ";
        cin >> first;
        cout << "Enter the second number: ";
        cin >> second;
        cout << "The minimum btn " << first << " and " << second << " is " << min(first, second);
        break;

    case 16:
        cout << "Enter the first number: ";
        cin >> first;
        cout << "Enter the second number: ";
        cin >> second;
        cout << "The maximum btn " << first << " and " << second << " is " << max(first, second);
        break;

    default:
        cout << "You choose an invalid operant";
    }
    return 0;
}