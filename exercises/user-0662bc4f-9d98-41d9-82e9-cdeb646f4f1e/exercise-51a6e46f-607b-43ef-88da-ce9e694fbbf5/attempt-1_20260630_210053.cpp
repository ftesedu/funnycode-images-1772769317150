#include <iostream>

using namespace std;
const double pi = 3.14;
struct Circle{
    double radius;

    Circle(double r) : radius(r){}
    double getArea()const{
        return pi*radius*radius;
    }
    double getCircumference()const{
        return 2*pi*radius;
    }
};

int main(){
    Circle c(7);
    cout << c.getArea() << endl;
    cout << c.getCircumference() <<endl;
    return 0;
}