#include<iostream>
using namespace std;
class Circle{
    private:
    double radius;
    public:
    Circle();
    Circle(double radius){
        this->radius=radius;
    }
    double getArea(){
        return radius*radius*3.14;
    }
    double getCircumference(){
        return 2*radius*3.14;
    }
};
int main(){
    Circle c(7);
    cout << c.getArea() << endl;
    cout << c.getCircumference() << endl;
    return 0;
}