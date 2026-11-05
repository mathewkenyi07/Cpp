#include <iostream>
using namespace std;


//class for shapes
class Shape {
    private:
    string name;
    int numberOfShapes;
    string color;

    public:
    //setter function for name
    void setName(string newName){
        name = newName;
    }

    //getter function for name
    string getName(){
        return name;
    }

    //setter function for numberofshapes

    void setNumberOfShapes(int newNumber){
        numberOfShapes = newNumber;
    }

    //getter function for numberofshapes

    int getNumberOfShapes(){
        return numberOfShapes;
    }


};

class circle : public Shape {
    
};