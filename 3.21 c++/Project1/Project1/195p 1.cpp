/*
정수의 약수를 모두 찾아내는 함수
get_divisor()를 작성
8이 주어지면 1,2,4,8을 화면에 출력.
*/
#include <iostream>
using namespace std;

void get_divisor(int);

int main() {
	int num;
	char again;

	while (true) {
		cout << "정수를 입력하세요: ";
		cin >> num;
		get_divisor(num);

		cout << "Would you like to continue? : \n";
		cin >> again;

		if (again == 'n')
			break;
	}
}
	void get_divisor(int num){
		for(int i = 1; i <= num; i++) {
			if (num % i == 0)
				cout << i << " ";
	}
}

	/*
	cout << "Would you like to continue? : \n";
		cin >> again;

		if (again == y)
			continue;
		else
			break;
	*/