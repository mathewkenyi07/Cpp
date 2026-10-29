#include <iostream>
using namespace std;

void calculategrade(double score){
    
    if (score >= 90 && score <= 100){
        cout << "Grade A";
    }
    else if (score >= 80 && score <= 89){
        cout << "Grade B";
    }
    else if (score >= 70 && score <= 79){
        cout << "Grade C";
    }
    else if(score >= 60 && score <= 69){
        cout << "Grade D";
    }
    else if (score < 60){
        cout << "Grade F";
    }
    else {
        cout << "Score out of range";
    }

}

int main(){

    double enteredScore;
    cout << "Enter your score: ";
    cin >> enteredScore;
    calculategrade(enteredScore);
    return 0;
  
}