#include <iostream>
#include <cmath>

using namespace std;

class Circle{
	private:
		double radius;
	public:
		Circle (){};
		Circle (double radius){
			this->radius = radius;
		}
		double getArea(){
			return pow(radius,2) * 3.14;
		}
		double getCircumference(){
			return radius*2 * 3.14;
		}
};