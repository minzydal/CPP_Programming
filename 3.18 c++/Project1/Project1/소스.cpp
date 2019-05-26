#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	double value;

	while (true) {
		cout << "실수값을 입력하시오 : ";
		cin >> value;

		if (value < 0.0)
			break; //continue의 경우?
		cout << value << "의 제곱근은 " << sqrt(value) << "입니다.\n";
		//sqrt 제곱근
	}

}