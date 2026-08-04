#include <iostream>
using namespace std;

class Circle{
	private:
		double radius;
	public:
		Circle(double radius){
			this->radius=radius;
		}
		double getArea(){
			double dientich= 3.14*radius*radius;
			return dientich;
		}
		double getCircumference(){
			double chuvi= 2*radius*3.14;
			return chuvi;
		}
};


int main(){
	Circle c(7);
    cout << c.getArea() << endl;
    cout << c.getCircumference() << endl;
    return 0;
}