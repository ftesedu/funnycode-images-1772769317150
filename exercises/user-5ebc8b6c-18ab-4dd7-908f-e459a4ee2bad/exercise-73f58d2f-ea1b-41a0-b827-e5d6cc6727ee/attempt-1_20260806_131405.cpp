#include <iostream>
using namespace std;

class Shape{
	public:
	virtual double getArea()=0;
	virtual double getPerimeter()=0;
};

class Rectangle : public Shape{
	private:
		double length;
		double width;
	public:
		Rectangle(double length, double width){
			this->length=length;
			this->width=width;
		}
		double getArea(){
			return this->length*this->width;
		}
		double getPerimeter(){
			return (this->length+this->width)*2;
		}
};

class Circle : public Shape{
	private:
		double radius;
	public:
		Circle(double radius){
			this->radius=radius;
		}
		double getArea(){
			return this->radius*this->radius*3.14;
		}
		double getPerimeter(){
			return 2*3.14*this->radius;
		}
};

int main(){
	 Shape** shapes = new Shape * [3];
    shapes[0] = new Rectangle(3.4, 5.3);
    shapes[1] = new Circle(5.5);
    shapes[2] = new Rectangle(7.4, 4.3);
    for (int i = 0; i < 3; i++) {
        cout << "Area of shapes[" << i << "]: " << shapes[i]->getArea() << endl;
        cout << "Perimeter of shapes[" << i << "]: " << shapes[i]->getPerimeter() << endl;
    }
    return 0;
}