#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;
struct HocSinh{
    string name;
    int age;
};
void getInformation(HocSinh &a){
    getline(cin,a.name);
    cin >> a.age;
}
void display(HocSinh a){
    cout << "Name: " << a.name << endl;
    cout <<"Age: " << a.age << endl; 
}
int main(){
    HocSinh a;
    getInformation(a);
    display(a);
    return 0;
}