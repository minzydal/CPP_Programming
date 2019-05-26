#include <iostream>
#include <string>
using namespace std;

class Product {
private :
	int id, price = 100; // 멤버변수 초기화 가능
	string name; // 모든 객체는 다른 값을 갖는다는 가정
public :
	void input();
	void print();
	bool isCheaper(Product other);
};
void Product::input(){ // 어떤 객체의 멤버변수들에 입력값을 대입할까?
	cout << "상품의 일련번호 : ";
	cin >> id;
	cout << "상품의 이름 : ";
	cin >> name;
	cout << "상품의 가격 : ";
	cin >> price;
}
void Product::print() { // 어떤 객체의 멤버변수들을 출력할까?
	cout << "번호 : " << id << endl;
	cout << "이름 : " << name << endl;
	cout << "가격 : " << price << endl;
}
bool Product::isCheaper(Product other) { //OOP의 특징, 중요
	if (price < other.price)
		return true;
	else
		return false;
}
void main(){
	Product p1, p2;

	p1.input();
	p2.input();
	if (p1.isCheaper(p2)) {
		p1.print();
		cout << "p1이 싸다\n";
	}
	else {
		p2.print();
		cout << "p2가 싸다\n";
	}
}