#include <iostream>   // (cout, cerr, endl)
#include <fstream>    // (ifstream, ofstream)
#include <vector>     // (vector)
#include <string>     // (string)
#include <iomanip>    // (setprecision, fixed)
#include <cmath>
using namespace std;
class Date{
	private:
		int day;
		int month;
		int year;
	public:
		Date(int day, int month, int year){
			this->day=day;
			this->month=month;
			this->year=year;
		}
		void setDate(int day, int month, int year){
			this->day=day;
			this->month=month;
			this->year=year;
		}
		void setDay(int day){
			this->day=day;
		}
		int getDay(){
			return day;
		}
		void setMonth(int month){
			this->month=month;
		}
		int getMonth(){
			return month;
		}
		void setYear(int year){
			this->year=year;
		}
		int getYear(){
			return year;
		}
		void display(){
			cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
		}
		
};
int main() {
	Date d(1, 1, 1997);
	d.display();
	d.setDate(12, 12, 2004);
	d.display();
	d.setMonth(3);
	d.display();	
	return 0;
}
