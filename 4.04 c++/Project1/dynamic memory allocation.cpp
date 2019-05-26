#include <iostream>
using namespace std;

void main() {
	int num;
	int *ptr; //동적 메모리를 가리키는 데이터

	cout << "Enter number of data : ";
	cin >> num;

	ptr = new int[num]; //동적 메모리 할당 (dynamic memory allocation)
						//실행 시간에 필요한 메모리 할당 기능

	int *p = ptr;
	for (int i = 0; i < num; i++) {
		cout << ptr[i] << " " << *p << endl;
		p++;
	}
	delete[] ptr;
}