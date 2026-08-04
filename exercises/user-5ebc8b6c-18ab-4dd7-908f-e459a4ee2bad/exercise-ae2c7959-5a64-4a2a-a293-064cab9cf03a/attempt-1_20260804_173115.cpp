#include <iostream>
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
		void setMonth(int month){
			this->month=month;
		}
		void setYear(int year){
			this->year=year;
		}
		int getDay(){
			cin>>day;
		}
		int getMonth(){
			cin>>month;
		}
		int getYear(){
			cin>>year;
		}
		void display(){
			if(day<10 && month<10){
				cout<<"0"<<this->day<<"/"<<"0"<<this->month<<"/"<<this->year<<endl;
			}else if (month <10){
				cout<<this->day<<"/"<<"0"<<this->month<<"/"<<this->year<<endl;
			}else if (day <10){
				cout<<"0"<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
			}else{
				cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;
			}
		}
};


int main(){
	Date d(1, 1, 1997);
	d.display();
	d.setDate(12, 12, 2004);
	d.display();
	d.setMonth(3);
	d.display();	
	return 0;
}