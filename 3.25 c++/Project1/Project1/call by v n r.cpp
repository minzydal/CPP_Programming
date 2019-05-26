/*
call by value / call by reference
배열 요소를 함수에 넘기면 일반 변수와 같이 함수에서 새로운 변수를 만들고 값을 복사(call by value)
배열을 함수에 넘기면 배열 주소를 전달(call by reference)
배열의 이름은 배열의 시작 주소를 의미
*/

#include <iostream>
using namespace std;

void call_by_value(int);
void call_by_reference(int[], int);

int main() {
	int grade[5] = { 1, 2, 3, 4, 5 };

	call_by_value(grade[0]); //배열 요소 전달하는 경우 call by value
	cout << "main : " << grade[0] << endl;

	call_by_reference(grade, 5); //배열을 함수에 전달할 경우 크기도 같이 전달
	cout << "main : ";
	for (int i = 0; i < 5; i++)
		cout << grade[i] << " ";
	cout << "\n";
	//배열은 함수에서 값이 변경되면 main에서도 변경된 값이 유지된다
	printf("main : %p\n", grade);
	return 0;
}
void call_by_value(int n) {
	n = 100;
	cout << "함수 : " << n << endl;
}
void call_by_reference(int g[], int n) {
	for (int i = 0; i < n; i++)
		g[i] += 10;
	cout << "함수 : ";
	for (int i = 0; i < n; i++)
		cout << g[i] << " ";
	cout << "\n";
	printf("function : %p\n", g);
}