#include <iostream>

using namespace std;

class Rectangle{
	private:
		double length;
		double width;
	public:
		Rectangle(){};
		void getInformation(double length, double width){
			this->length = length;
			this->width = width; 
		}
		double getArea(){
			return length*width;
		}
		
		double getPerimeter(){
			return (length+width)*2;
		}
		
		void display(){
			cout << "Area: " << getArea() << endl;
			cout << "Perimeter: " << getPerimeter() << endl;
		}
};
int main(){
	double length, width;
	cout << "Input length: ";
	do {
	    cin >> length;
	    if (length <= 0) cout << "Length must be positive! Re-enter: ";
	} while (length <= 0);
	cin.ignore();
	
	cout << "Input width: ";
	do {
	    cin >> width;
	    if (width <= 0) cout << "Width must be positive! Re-enter: ";
	} while (width <= 0);
	cin.ignore();
	Rectangle rec;
	rec.getInformation(length, width);
	rec.display();
	return 0;