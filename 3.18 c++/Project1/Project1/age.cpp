#include <iostream>
using namespace std;

int main() {
	int age;

	cout << "Enter age: ";
	cin >> age;
	
	if ((age > 0) && (age < 18))
		cout << "청소년\n";
	else
		cout << "성인\n";
	

	return 0;
}