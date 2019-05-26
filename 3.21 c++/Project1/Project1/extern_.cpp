#include <iostream>
using namespace std;

extern int sum;	//외부 파일에 있는 변수. 전역 변수만 extern이 될 수 있음
extern int get_square(int);	//외부 파일에 있는 함수;

void main() {
	int num = 5;

	printf("%d\n", sum);
	cout << get_square(num) << endl;
	cout << sum << endl;
}