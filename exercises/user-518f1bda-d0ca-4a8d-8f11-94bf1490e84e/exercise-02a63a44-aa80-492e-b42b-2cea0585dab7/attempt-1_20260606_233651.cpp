#include <iostream>

using namespace std;

class Student{
	private:
		string name, gender;
		int age;
		double gpa;
	public: 
		Student(){};
		Student(string name, int age, string gender, double gpa){
			this->name = name;
			this->age = age;
			this->gender = gender;
			this->gpa = gpa;
		}
		void display(){
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
			cout << "Gender: " << gender << endl;
			cout << "GPA: " << gpa << endl;
		}

};