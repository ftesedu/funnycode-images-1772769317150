#include <iostream>   // (cout, cerr, endl)
#include <fstream>    // (ifstream, ofstream)
#include <vector>     // (vector)
#include <string>     // (string)
#include <iomanip>    // (setprecision, fixed)
#include <cmath>
using namespace std;
class rectangle{
	private:
		double length;
		double width;
	public:
		void getInformation(){
			cout<<"Length: ";
			cin>>length;
			cout<<"Width: ";
			cin>>width;
		}
		void display(){
			cout<<"Area: "<<this->getArea()<<endl;
			cout<<"Perimeter: "<<this->Perimeter()<<endl;

		}
		double getArea(){
			return (length*width);
		}
		double Perimeter(){
			return (length+width)*2;
		}
};
int main() {
	rectangle r1;
	r1.getInformation();
	r1.display();
    cout << endl;
    return 0;
}
