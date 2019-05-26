#include <iostream>
using namespace std;

class BankAccount {
private:
	int number, balance;
	string owner;
public:
	void setBalance(int B) {
		balance = b;
	}
	int getBalance() {
		return balance;
	}
	void setNumber(int n) { number = n; }
	int getNumber() { return number; }
	void setOwner(string o) { owner = o; }
	string getOwner() { return owner; }
	void deposit(int b) { balance += b; }
	void withdraw(int b) {// 멤버변수 balance check
		if (b <= balance)
			balance -= b;
		else
			cout << "insufficient balace \n";
}
void print() {
	cout << "Number : " << number << endl;
	cout << "Balance : " << balance << endl;
	cout << "Owner : " << owner << endl;
	}
};
void main() {
	BankAccount ba;

	ba.setNumber(123456);
	ba.setOwner("minzy");
	ba.setBalnace(0);
	ba.deposit(10000);
	ba.print();
	ba.withdraw(8000);
	ba.print();
}
//멤버함수를 클래스 밖에서 정의하는 방법 연습