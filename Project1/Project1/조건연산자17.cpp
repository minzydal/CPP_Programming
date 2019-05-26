/*
조건연산자 ?만을 이용하여 2차원 공간의x, y좌표를 입력받아서 
그 좌표가 속하는 사분면을 출력하는 프로그램.
*/
#include <iostream>
using namespace std;

int main() {

	int x, y, quarter;

	cout << "Please enter x and y coordinate : ";
	cin >> x >> y;

	quarter = (x > 0) ? ((y > 0) ? 1 : 4) : ((y > 0) ? 2 : 3); //삼항 연산자 이용하여 if-else문 코드 간략하게 표현.
	cout << quarter << "사분면\n";

}