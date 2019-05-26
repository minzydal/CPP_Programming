/*
�����Լ��� friend�� �����ϴ� ���
friend �Լ��� Ŭ������ ��� ����� ������ �� �ִ�
friend �Լ��� ��ġ�� ������� public�̳� private�� ������ ���� �ʴ´�.
����Լ��� �ƴ� �����Լ��̱� �����̴�.
*/

#include <iostream>
using namespace std;

class Company {
	int sales, profit;
	friend void print(Company &c); //��� �Լ� �ƴ� ���� �Լ�
public :
	Company() : sales(100), profit(10) {
	}
	// friend void print(Company &c);
	void print() {
		cout << sales << ", " << profit << endl;
	}
};
void print(Company &c) {
	cout << c.sales << ", " << c.profit << endl;
}
void main() {
	Company company;
	print(company);	// ���� �Լ� ȣ��
	company.print();
}