#include <iostream>
using namespace std;

// using while
// int main()
// {
//     int num;
//     cout << "Enter an integer: ";
//     cin >> num;

//     while(num<10){
//         cout << "Number is less than 10 \n";
//         num++;
//     }

//     return 0;
// }

int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;



//even if the condition is false it will still print once
    do
    {
        cout << "Number is less than 10 \n";
        num++;
    }
    while(num<10);
}