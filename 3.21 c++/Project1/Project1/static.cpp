#include <iostream>
using namespace std;

void function();

void main() {
	for (int i = 0; i < 5; i++)
		function();
}
void function() {
	int num = 0;
	static int snum = 0; //static변수(정적)는 처음 호출 시 단 한번만 초기화된다
						//호출되면 변화된 값을 유지한다.
	cout << num << ", " << snum << endl;
	num++;
	snum++;
	
	cout << "function 호출 횟수 : " << snum << endl;
}