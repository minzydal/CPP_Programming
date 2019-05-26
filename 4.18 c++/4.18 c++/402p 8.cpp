#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private :
	int balance;
public :
	void setBalance(int b) {
		balance += b;
	}
	void withdraw(int b) {
		if (b <= balance)
			balance -= b;
	}
	void withdraw(int b) {
		if (b <= balance)
			balance -= b;
		else
			cout << "insufficient balance\n";
	}
	void print() {
		cout << "Balance : " << balance << endl;
	}
	void transfer(int amount, BankAccount &other) { // call by value ����ϸ� ���� ������ �ʴ´�
		balance -= amount;							// �ݵ�� call by reference ����Ѵ�.
		other.balance += amount;
		cout << balance << ", " << other.balance << endl << endl; //other�� balance ����
	}

};

void main() {
	BankAccount ba;
	ba.setBalance(0);
	ba.deposit(10000);
	ba.print();

	BankAccount other;
	other.setBalance(5000);
	other.print();

	ba.transfer(1000, other);
	ba.print();
	other.print();	//other�� balance �Һ�
}