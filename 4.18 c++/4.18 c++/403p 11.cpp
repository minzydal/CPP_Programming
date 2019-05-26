#include <iostream>
#include <string>
using namespace std;

class Product {
	string name;
	double assessment;
public : 
	void getinfo();
	bool isBetter(Product);
	void print();
};
void Product::getinfo() {
	cout << "Enter name : ";
	cin >> name;
	cout << "Enter assessment(0.0 - 1.0) : ";
	cin >> assessment;
}
bool Product::isBetter(Product p) {
	cout << "hong :";
	if (assessment > p.assessment)
		return true;
	else
		return false;
}
void Product::print() {
	cout << "Name : " << name << endl;
	cout << "Assessment : " << assessment << endl << endl;
}
void main() {
	Product p1, p2;

	p1.getinfo();
	p1.print();
	p2.getinfo();
	p2.print();
	if (p1.isBetter(p2))
		cout << "p1 is better\n";
	else
		cout << "p2 is better\n";
	p2.print();
}

