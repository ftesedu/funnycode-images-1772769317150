#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;
struct SoLieu
{
    double length;
    double width;

    void getInformation(){
        cin >> length >> width;
    }
    double getArea()const{
        return length * width;
    }
    double getPerimeter() const{
        return (length+width)*2;
    }
    void display() const {
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
    }
};
int main()
{
    SoLieu a;
    a.getInformation();
    a.display();
    return 0;
}