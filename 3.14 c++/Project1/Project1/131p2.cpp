/*
사용자로부터 3개의 정수를 읽어 들여 if0else문을 사용하기 가장 작은 값을 결정하는 프로그램
*/
#include <iostream>
using namespace std;

int main() {

	int a, b, c,min; //입력받을 3개의 정수
	cout << "Please enter the a, b, c\n";
	cin >> a >> b >> c;
	
	if (a < b) {
		if (a < c)
			min = a;
		else
			min = c;
	}
	else {
		if (b < c)
			min = b;
		else
			min = c;
	}
		cout << min << endl;
		/*
		삼항 연산자로 코드 간략화 
		min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
		*/
		return 0;
}