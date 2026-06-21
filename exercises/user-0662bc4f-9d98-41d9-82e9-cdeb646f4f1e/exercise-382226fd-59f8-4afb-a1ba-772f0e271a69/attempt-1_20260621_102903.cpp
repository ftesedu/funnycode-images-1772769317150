#include <iostream>
#include <iomanip>

using namespace std;

class Date
{
private:
    int day;
    int month;
    int year;

public:
    // Phương thức khởi tạo
    Date(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    // Các phương thức setter
    void setDate(int day, int month, int year)
    {
        this->day = day;
        this->month = month;
        this->year = year;
    }

    void setDay(int day)
    {
        this->day = day;
    }

    void setMonth(int month)
    {
        this->month = month;
    }

    void setYear(int year)
    {
        this->year = year;
    }

    // Các phương thức getter
    int getDay()
    {
        return day;
    }

    int getMonth()
    {
        return month;
    }

    int getYear()
    {
        return year;
    }

    // Phương thức hiển thị
    void display()
    {
        // Sử dụng setw(2) để đảm bảo in ra 2 ký tự, setfill('0') để điền số 0 vào khoảng trống
        cout << setfill('0') << setw(2) << day << "/"
             << setfill('0') << setw(2) << month << "/"
             << year << endl;
    }
};