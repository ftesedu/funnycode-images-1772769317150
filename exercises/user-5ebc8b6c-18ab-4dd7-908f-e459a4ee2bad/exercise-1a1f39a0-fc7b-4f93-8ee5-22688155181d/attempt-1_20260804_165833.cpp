#include <iostream>
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
			double dientich= length*width;
			return dientich;
		}
		
		double getPerimeter(){
			double chuvi= (length+width)*2;
			return chuvi;
		}
		
		void display(){
			cout<<"Area: "<<getArea()<<endl;
			cout<<"Perimeter: "<<getPerimeter();
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