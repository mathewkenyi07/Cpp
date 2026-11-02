#include <iostream>
#include <string>

using namespace std;

class StudentReg {
    private:
    string regNumber;

    public:
    void setReg(string newReg){
        if (newReg.length() >= 8){
            regNumber = newReg;
        }
        else {
            cout << "Invalid Reg number" << endl;
        }
    }

    string getReg(){
        return regNumber;
    }


};

int main(){

    StudentReg student1;

    student1.setReg("65");

    //console the regnumber

    cout << "Regnumber: " << student1.getReg() << endl;



    return 0;
}