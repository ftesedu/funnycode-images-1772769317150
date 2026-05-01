#include <iostream>   // (cout, cerr, endl)
#include <string>     // (string)
using namespace std;
class Student {
	private:
		string name;
		int age;
	public:
		void getInformation(){
			cout<<"Enter name: ";
			getline(cin, name);
			cout<<"Enter age: ";
			cin>>age;
			cin.ignore(1000, '\n');	
		}
		void display(){
			cout<<"Name: "<<name<<endl;
			cout<<"Age: "<<age<<endl;
			
		}
};
int main() {
	Student s1;
	s1.getInformation();
	s1.display();
    cout << endl;
    return 0;
}
