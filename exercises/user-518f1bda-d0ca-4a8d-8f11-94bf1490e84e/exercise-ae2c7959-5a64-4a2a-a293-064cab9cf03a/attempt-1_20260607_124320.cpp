#include <iostream>

using namespace std;

class Date{
	private:
		int day, month, year;
	public : 
		Date(){} ;
		Date(int day , int month, int year){
			this->day = day;
			this->month = month;
			this->year = year; 
		}
		void setDate(int day, int month, int year) {
			this->day = day;
			this->month = month;
			this->year = year; 
		}
		void setDay(int day){
			this->day = day;
		}
		void setMonth(int month){
			this->month = month;
		}
		void setYear(int year){
			this->year = year;
		}
		int getDay(){
			return day;
		}
		int getMonth(){
			return month;
		}
		int getYear(){
			return year;
		}
		void display(){
			string str_day, str_month;
			if (day < 10){
				str_day = "0" + to_string(day);
			}else{
				str_day = to_string(day);
			}
			if (month < 10){
				str_month = "0" + to_string(month);
			}else{
				str_month = to_string(month);
			}
			cout << str_day << "/" << str_month << "/" << year << endl;	
		}

};
