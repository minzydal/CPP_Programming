#include <iostream>
using namespace std;

void main() {
	int pizza_slices = 0;
	int persons = 0;
	int slices_per_persons = 0;

	try {
		cout << "피자 조각 수 입력 : ";
		cin >> pizza_slices;
		cout << "사람 수 입력 : ";
		cin >> persons;

		slices_per_persons = dividePizza(pizza_slices, persons);
		cout << slices_per_persons << endl;
	}
	catch (int e) {
		cout << "사람이" << e << "명 입니다\n";
	}
	cout << "try, catch를 이용한 exception handling\n";
}

int dividePizza(int ps, int pe) {
	if (pe == 0)
		throw pe;	//호출 함수에 예외 전달
	return ps // pe;
}

