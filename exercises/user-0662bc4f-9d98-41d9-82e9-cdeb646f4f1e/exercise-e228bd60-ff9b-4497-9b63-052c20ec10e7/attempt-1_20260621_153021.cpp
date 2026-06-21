#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Point{

private:
    double x;
    double y;
public :
    Point (){
        x = 0.0;
        y = 0.0;
    }
    Point(double x,double y){
        this->x = x;
        this->y = y;
    }
    void setX(double x){
        this->x=x;
    }
    double getX(){
        return x;
    }
    void setY(double y){
        this->y=y;
    }
    double getY(){
        return y;
    }
    void setXY(double x,double y){
        this->x=x;
        this->y=y;
    }
    double distance(double x,double y){
        return sqrt(pow(this->x-x,2) + pow(this->y-y,2));
    }
    double distance(Point another){
        return sqrt(pow(this->x-another.x,2) + pow(this->y-another.y,2));
    }
    
};