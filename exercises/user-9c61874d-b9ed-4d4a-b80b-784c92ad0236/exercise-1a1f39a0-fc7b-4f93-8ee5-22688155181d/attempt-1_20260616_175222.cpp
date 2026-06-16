#include <iostream>

using namespace std;

class Rectangle {
  public:
    float length;
    float width;
    void getInformation() {
        cin >> length;
        cin >> width;
    }
    double getArea() {
        return length * width;
    }
    double getPerimeter() {
        return 2 * (length + width);
    }
    void display(){
        cout << "Area: " << this->getArea() << endl;
        cout << "Perimeter: " << this->getPerimeter() << endl;
    }
};

int main() {
    Rectangle r1;
    r1.getInformation();
    r1.display();
    return 0;
}