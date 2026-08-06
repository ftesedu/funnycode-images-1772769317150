#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Food{
	private:
		string name;
		double price;
	public:
		Food(){};
		Food(string name, double price){
			this->name=name;
			this->price=price;
		}
		void setName(string name){
			this->name=name;
		}
		string getName(){
			return name;
		}
		void setPrice(double price){
			this->price=price;
		}
		double getPrice(){
			return price;
		}
};

class CannedFood : public Food{
	private:
		int numberBox;
	public:
		CannedFood(){};
		CannedFood(string name, double price, int numberBox) : Food(name, price){
			this->numberBox=numberBox;
		}
		void display(){
			cout<<"Name: "<<getName()<<endl;
			cout<<"Price: "<<getPrice()<<endl;
			cout<<"Number box: "<<getNumberBox();
		}
		void setNumberBox(int numberBox){
			this->numberBox=numberBox;
		}
		int getNumberBox(){
			return numberBox;
		}
		bool operator < (const CannedFood& other) const {
			return this->numberBox < other.numberBox;
		}
		void sortNumberBox(vector<CannedFood>& vt){
			sort(vt.begin(), vt.end());
		}
};

class NonCFood : public Food{
	private:
		double weight;
	public:
		NonCFood(){};
		NonCFood(string name, double price, double weight) : Food(name, price){
			this->weight=weight;
		}
		void display(){
			cout<<"Name: "<<getName()<<endl;
			cout<<"Price: "<<getPrice()<<endl;
			cout<<"Weight: "<<getWeight();
		}
		void setWeight(double weight){
			this->weight=weight;
		}
		double getWeight(){
			return weight;
		}
		bool operator < (const NonCFood& other) const {
			return this->weight < other.weight;
		}
		void sortWeight(vector<NonCFood>& vt){
			sort(vt.begin(), vt.end());
		}
};
int main(){
	CannedFood s1("Ca", 1500, 10);
	s1.display();
	cout<<endl;
	NonCFood s2("Ca", 1500,5);
	s2.display();
}