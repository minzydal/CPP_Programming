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

		if (persons == 0)
			throw persons;	//catch 블락에 매개변수로 int 타입 persons 전달
		slices_per_persons = pizza_slices / persons;
		cout << slices_per_persons << endl;
	}
	catch (int e) {
		cout << "사람이" << e<< "명 입니다\n";
	}

	//예외가 발생하건 하지 않건 다음 문장으로 진행한다. graceful end
	cout << "try, catch를 이용한 exception handling\n";
	}


