#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name, surname, program;
    int age, year;

    cout << "Enter your surname: ";
    // cin >> surname;
    getline(cin,surname);
    cout << "Enter your full names: ";
    // cin >> name;
    getline(cin,name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter year of study: ";
    cin >> year;
    cout << "Enter your program of study: ";
    // cin >> program;
    getline(cin >> ws,program);
    //ws => means whitespace
    
    cout << "========================================\n";
    cout << "Surname: " << surname << endl
         << "Name: " << name << endl
         << "Age: " << age << endl
         << "Program: " << program << endl
         << "Year: " << year << endl;

    return 0;
}