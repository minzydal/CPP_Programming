#include <iostream>
using namespace std;

int main() {
	int age;

	cout << "Enter age: ";
	cin >> age;
	
	if ((age > 0) && (age < 18))
		cout << "û�ҳ�\n";
	else
		cout << "����\n";
	

	return 0;
}