#include <iostream>
#include <cmath>

using namespace std;

class Point{ 
	private:
		double x;
		double y;
	public:
		Point(){};
		Point(double x, double y){
			this->x = x;
			this->y = y;
		}
		void setX(double x){
			this->x = x;
		}
		double getX(){
			return x;
		}
		void setY(double y){
			this->x = x;
		}
		double getY(){
			return y;
		}
		void setXY ( double x, double y){
			this->x = x;
			this->y = y;
		}
		double distance(double diff_x, double diff_y){
			return sqrt(pow(diff_x - x,2) + pow(diff_y-y,2));
		}
		double distance(Point p){
			return sqrt(pow(p.getX() - x,2) + pow(p.getY()-y,2));
			
		}
};