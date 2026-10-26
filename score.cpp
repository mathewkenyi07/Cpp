//Write an if statement that increases pay by 3% if the score is greater than 90 otherwise increase pay by 1%
#include <iostream>
using namespace std;
int main(){
    double score;
    double pay;
    cout << "Enter your score: ";
    cin >> score;
    cout << "Enter your pay: ";
    cin >> pay;

    if (score>90){
        cout << "Your increased Pay by 3% : " << ((pay*3/100) + pay);
    }
    else {
        if (score < 90){
            cout << "Your increased Pay by 1% : " << ((pay*1/100) + pay);
        }
    }

    return 0;
}