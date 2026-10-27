#include <iostream>
using namespace std;

int main(){
    int num;
    int sum = 0;
    double avg = 0;

for (int i = 0; i<5; i++){
    cout << "Enter a number: ";
    cin >> num;
    sum = sum + num;
    
}

avg = sum/5;

cout << "The sum is " << sum << endl;
cout << "The average is " << avg;
return 0;
}

