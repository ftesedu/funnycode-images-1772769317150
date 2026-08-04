#include <iostream>
#include <string>

using namespace std;

class Student{
	private:
		string name;
		int age;
		string gender;
		double gpa;
	public:
	   Student(string name,int age,string gender,double gpa){
	   	this->name=name;
	   	this->age=age;
	   	this->gender=gender;
	   	this->gpa=gpa;
	   }
	   void display(){
	   	cout<<"Name: "<<this->name<<endl;
	   	cout<<"Age: "<<this->age<<endl;
	   	cout<<"Gender: "<<this->gender<<endl;
	   	cout<<"GPA: "<<this->gpa;
	   }	
};



int main(){
	Student s("Quang", 24, "Male", 7.7);
    s.display();
}