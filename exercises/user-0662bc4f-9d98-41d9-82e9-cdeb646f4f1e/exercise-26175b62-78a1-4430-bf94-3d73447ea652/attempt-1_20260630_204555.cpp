#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int age;
    string gender;
    double gpa;

public:
    Student(string name, int age, string gender, double gpa)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->gpa = gpa;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    string getGender()
    {
        return gender;
    }
    double getGpa()
    {
        return gpa;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setGender(string gender)
    {
        this->gender = gender;
    }
    void setGpa(double gpa)
    {
        this->gpa = gpa;
    }
    void display() const
    {
        cout << "Name: " << name << endl
             << "Age: " << age << endl
             << "Gender: " << gender << endl
             << "GPA: " << gpa << endl;
    }
};
int main()
{
    Student s("Quang", 24, "Male", 7.7);
    s.display();
}