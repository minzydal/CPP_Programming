/*
전역함수를 friend로 지정하는 경우
friend 함수는 클래스의 모든 멤버에 접근할 수 있다
friend 함수는 위치에 관계없이 public이나 private의 영향을 받지 않는다.
멤버함수가 아닌 전역함수이기 때문이다.
*/

#include <iostream>
using namespace std;

class Company {
	int sales, profit;
	friend void print(Company &c); //멤버 함수 아닌 전역 함수
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
	print(company);	// 전역 함수 호출
	company.print();
}