#include <iostream>

using namespace std;

class Student{
	private:
		string name;
		int age;
	public:
		Student(){};
		void getInformation(string name, int age){
			this->name = name;
			this->age = age;
		}
		void display(){
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl; 
		}
		
		
		
};
int main(){
	string In_name;
	int In_age;
	Student s1;
	cout << "Input Name: " ;
	cin >> In_name;
	cout << "Input Age: " ;
	cin >> In_age;
	s1.getInformation(In_name , In_age);
	s1.display();
	
	return 0;
}