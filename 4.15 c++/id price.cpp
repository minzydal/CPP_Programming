#include <iostream>
#include <string>
using namespace std;

class Product {
private :
	int id, price = 100; // ������� �ʱ�ȭ ����
	string name; // ��� ��ü�� �ٸ� ���� ���´ٴ� ����
public :
	void input();
	void print();
	bool isCheaper(Product other);
};
void Product::input(){ // � ��ü�� ��������鿡 �Է°��� �����ұ�?
	cout << "��ǰ�� �Ϸù�ȣ : ";
	cin >> id;
	cout << "��ǰ�� �̸� : ";
	cin >> name;
	cout << "��ǰ�� ���� : ";
	cin >> price;
}
void Product::print() { // � ��ü�� ����������� ����ұ�?
	cout << "��ȣ : " << id << endl;
	cout << "�̸� : " << name << endl;
	cout << "���� : " << price << endl;
}
bool Product::isCheaper(Product other) { //OOP�� Ư¡, �߿�
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
		cout << "p1�� �δ�\n";
	}
	else {
		p2.print();
		cout << "p2�� �δ�\n";
	}
}