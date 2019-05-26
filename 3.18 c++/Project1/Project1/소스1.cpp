#include <iostream>
using namespace std;

int main(void) {
	char letter;

	while (true) {
		cout << "Enter lower case letter : ";
		cin >> letter;

		if (letter == 'Q')
			break; //letter가 Q일 때 중단
		if (letter < 'a' || letter > 'z')
			continue; //a보다 작거나 z보다 클 때 다시 반복
		letter -= 32; //아스키코드 표 참고, 대문자 소문자로 변환.
		cout << "대문자 : " << letter << endl;
	}

}