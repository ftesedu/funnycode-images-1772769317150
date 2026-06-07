#include <iostream>
#include <string>

using namespace std;

// ================= 1. LỚP CHA EMPLOYEE =================
class Employee {
    protected: // Đổi từ private thành protected để lớp con Manager có thể truy cập
        string name;
        int salary;
        
    public: 
        Employee(string name, int salary){
            this->name = name;
            this->salary = salary;
        }
        
        void setName(string name){
            this->name = name;
        }
        
        string getName(){
            return name;
        }
        
        // Thêm tham số int salary để hàm setter hoạt động đúng ý nghĩa
        void setSalary(int salary){
            this->salary = salary;
        }
        
        // Dùng virtual để lớp con có thể ghi đè (override) chính xác
        virtual int getSalary(){
            return salary;
        } 
        
        virtual void display(){
            cout << "Name: " << getName() << endl;
            cout << "Salary: " << getSalary() << endl;
        }
};

// ================= 2. LỚP CON MANAGER KẾ THỪA EMPLOYEE =================
class Manager : public Employee {
    private:
        int bonus;
        
    public:
        // Đã bổ sung phần thân hàm và gọi Constructor của lớp cha để gán name, salary
        Manager(string name, int salary, int bonus) : Employee(name, salary) {
            this->bonus = bonus;
        }
        
        void setBonus(int bonus){
            this->bonus = bonus;
        }
        
        int getBonus(){
            return bonus;
        }
        
        // Ghi đè lại hàm getSalary để tính tổng lương
        int getSalary() override {
            return salary + bonus;
        }
        
        // Ghi đè hàm display
        void display() override {
            cout << "Name: " << getName() << endl;
            cout << "Salary: " << getSalary() << endl;
        }
};

// ================= 3. HÀM MAIN (ĐƯA XUỐNG CUỐI CÙNG) =================
int main() {
    cout << "--- TEST CASE 1: EMPLOYEE KHANH ---" << endl;
    Employee emp("Khanh", 1500);
    emp.display();

    cout << "\n--- TEST CASE 2: MANAGER BINH ---" << endl;
    Manager mgr("Binh", 2500, 1600);
    mgr.display();

    return 0;
}