#include <iostream>
#include <cstdlib> //�����߻� �������
#include <ctime> //�ð����� �ٸ��� ���� ����

using namespace std;

int main() {
	int answer, guess;
	int tries = 0;

	srand((unsigned)time(NULL)); //�����߻��� �ʱ�ȭ
	answer = 1 + rand() % 50;
	/*
	rand()%50 : 0~49, 1+rand()%50 : 1~50 -> �ʱⰪ ����
	*/
	do {
		cout << "���� ���� : ";
		cin >> guess;
		tries++;
		if (guess > answer)
			cout << "�ʹ� ŭ.\n";
		if (guess < answer)
			cout << "�ʹ� ����.\n";
	} while (guess != answer);

	cout << "�����Դϴ�!\nȽ�� = " << tries << endl;
}
