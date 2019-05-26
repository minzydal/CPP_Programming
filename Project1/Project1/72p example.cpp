#include <iostream>
using namespace std;

void main (){
	int x = 10, y = 20;
	bool r1, r2, r3, r4;

	r1 = (x == y);
	r2 = (x != y);
	r3 = (x >= y);
	r4 = (x <= y);

	cout << r1 << endl;
	cout << r2 << endl;
	cout << r3 << endl;
	cout << r4 << endl;
	
	r1 = true;
	r2 = 0;
	cout << boolalpha << r1 << ", " << r2 << endl;

	//변수 초기화
	int num0 = 10;
	int num1(10);
	int num2 = { 10 };
	int num3{ 10 }; //uniform initialization
	// int num4 { 3.5 } //묵시적인 형변환 허용하지 않음.

	cout << num0 << ", " << num1 << ", " << num2 << ", " << num3 << endl;
}