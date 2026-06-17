#include "Employee.cpp"

class Manager:public Employee{
    private:
    int bonus;
    public:
    Manager(string name, int salary, int bonus):Employee(name,salary){
        this->bonus= bonus;
    }
    void setBonus(){
        this->bonus = bonus;
    }
    int getBonus(){
        return bonus;
    }
    int getSalary(){
        return Employee::getSalary()+bonus;
    }
    void display(){
        cout<<"Name: "<<getName()<<endl;
        cout<<"Salary: "<<getSalary()<<endl;
    }
};
int main(){
    Manager s1("Binh", 3000,1000);
    s1.display();
    return 0;
}
