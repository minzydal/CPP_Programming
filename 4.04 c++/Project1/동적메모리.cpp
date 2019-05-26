#include <iostream>
using namespace std;

void main() {
	int *pi; //주소를 참조할 수 있는 4바이트 할당

	pi = new int; //pi가 참조하는 4바이트 할당
	cout << pi << " : " << *pi << endl;
	*pi = 100;
	cout << pi << " : " << *pi << endl;

	delete pi; //메모리 해제

	int *ptr = new int[5]; //포인터를 이용한 배열 할당
						   //포인터를 배열처럼 사용할 수 있다.
	for (int i = 0; i < 5; i++) {
		cout << "Enter number : ";
		cin >> ptr[i];
	}
	pi = ptr;
	for (int i = 0; i < 5; i++) {
		cout << *pi << " ";
		pi++;
	}
	delete[]ptr;
}