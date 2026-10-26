#include <iostream>
using namespace std;
int main(){
//create a float varible to score ;
float score;
//prompt user to input their score;
cout << "Enter your score: ";
cin >> score;

//check the grades range and give their score based on their score
if (score>=90 && score <=100){
    cout << "Grade A";
}
 else if (score >= 80 && score <=89.99){
    cout << "Grade B";
}
 else if ( score >= 70 && score <= 79.99){
    cout << "Grade c";
}
 else if ( score >= 60 && score <= 69.99){
    cout << "Grade D";
}
else if (score <= 60 && score >=0) {
    cout << "Grade F";
}
else {
    cout << "Your score is out range it should be between 0 to 100";
}

    return 0;
}