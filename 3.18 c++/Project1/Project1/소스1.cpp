#include <iostream>
using namespace std;

int main(void) {
	char letter;

	while (true) {
		cout << "Enter lower case letter : ";
		cin >> letter;

		if (letter == 'Q')
			break; //letter�� Q�� �� �ߴ�
		if (letter < 'a' || letter > 'z')
			continue; //a���� �۰ų� z���� Ŭ �� �ٽ� �ݺ�
		letter -= 32; //�ƽ�Ű�ڵ� ǥ ����, �빮�� �ҹ��ڷ� ��ȯ.
		cout << "�빮�� : " << letter << endl;
	}

}