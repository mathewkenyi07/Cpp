#include <iostream>
using namespace std;

class Rectangle {
    private:
    double length;
    double width;

    public:
    //setter function for length
    void setLength(double newLength){
        length = newLength;
    }

    //getter function for length
    double getLength(){
        return length;
    }

    //setter function for width
    void setWidth(double newWidth){
        width = newWidth;
    }

    //getter function for width
    double getWidth(){
        return width;
    }

    //function to calculate area
    double calculateArea(double length, double width){
        return length * width;
    }

    //function to display 
    void displayDetails(double length, double width){
        cout << "The triangle has a length of " << length << " and width of " << width << " and the area of " << calculateArea(length,width) << endl;
    }
};

int main(){

    Rectangle rectangle1;

    rectangle1.setLength(20);
    rectangle1.setWidth(10);

    double length,width,area;

    length = rectangle1.getLength();
    width = rectangle1.getWidth();
    // area =  rectangle1.calculateArea(length,width);
    rectangle1.displayDetails(length,width);

  
    return 0;
}


