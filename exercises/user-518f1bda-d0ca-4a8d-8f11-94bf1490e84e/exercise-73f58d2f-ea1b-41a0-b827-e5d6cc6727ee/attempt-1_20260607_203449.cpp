#include <bits/stdc++.h>

using namespace std;

class Shape {
public:
	virtual double area() = 0; // hàm thuần ảo
};

class Circle : public Shape {
	private:
		double radius;
		
	public:
		Circle(double r) : radius(r) {}
		
		double area() override {
			return 3.14 * radius * radius;
		}
	};
int main(){
	Shape* s = new Circle(5);
	cout << s->area();
	return 0;
}