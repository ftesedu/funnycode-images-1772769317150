#include <iostream>
#include <math.h>

using namespace std;

class Point {
  private:
    double x;
    double y;

  public:
    Point() {}
    Point(double x, double y) {
        this->x = x;
        this->y = y;
    }
    void setX(double x) {
        this->x = x;
    }
    void setY(double y) {
        this->y = y;
    }
    double getX() {
        return x;
    }
    double getY() {
        return y;
    }
    double distance (double x, double y) {
        return sqrt(pow(this->x - x, 2) + pow(this->y - y, 2));
    }
    double distance (Point anther){
        return sqrt(pow(this->x - anther.getX(), 2) + pow(this->y - anther.getY(), 2));
    }
};