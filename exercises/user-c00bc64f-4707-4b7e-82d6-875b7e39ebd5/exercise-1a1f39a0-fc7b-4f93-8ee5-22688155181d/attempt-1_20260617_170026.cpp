#include<iostream>
using namespace std;
class Rectangle{
    public:
    double length;
    double width;
    void getInformation(){
        cin>>length;
        cin>>width;
    }
    double getArea(){
        return length*width;
    }
    double getPerimeter(){
        return (length+width)*2;
    }
    void display(){
        cout<<"Area: "<<getArea()<<endl;
        cout<<"Perimeter: "<<getPerimeter()<<endl;
    }
};
int main(){
    Rectangle s1;
    s1.getInformation();
    s1.getArea();
    s1.getPerimeter();
    s1.display();
    return 0;
}