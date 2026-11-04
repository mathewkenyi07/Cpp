//create a class named Rectangle with length and width attributes
//define two member functions 1:calculateArea() to returnt the area and displayDetails() to display the dimensions and the area
//In main() create two rectangle objects, assign different dimensions and display their areas


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
	
	//calculateArea function
	double calculateArea(){
		return length * width;
	}
	
	//displayDisplay function
	void displayDetails(){
		cout << "The length is : " << length << endl;
		cout << "The width is : " << width << endl;
		cout << "The area is : " << calculateArea() << endl;
		
	}
};


//main function
int main(){
	  Rectangle rectangle1;
	  Rectangle rectangle2;
	  
	  rectangle1.setLength(20);
	  rectangle1.setWidth(10);
	  rectangle2.setLength(2);
	  rectangle2.setWidth(4);
	  
	  cout << "========================" << endl;
	  rectangle1.displayDetails();
	  
	   cout << "========================" << endl;
	  rectangle2.displayDetails();
	
	
	
	return 0;
}