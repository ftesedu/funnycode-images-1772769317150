#include<iostream>
using namespace std;

class Date{
    private:
    int day;
    int month;
    int year;
    public:
    Date(){}
    Date(int d, int m, int y){
        this->day = d;
        this->month = m;
        this-> year = y;
    }
    void setDate( int d, int m, int y){
        this->day = d;
        this-> month= m;
        this->year = y;
    }
    void setDay( int d){
        this->day =d;
    }
    void setMonth( int m){
        this->month= m;
    }
    void setYear( int y){
        this->year= y;
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
        string day = to_string(this->day);
        string month = to_string (this->month);
        string year = to_string( this->year);
        if(day.length()==1){
            day="0"+day;
        }
        if(month.length()==1){
            month= "0" + month;
        }
        cout<<day<<"/"<<month<<"/"<<year<<endl;
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