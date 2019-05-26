#include <iostream>
#include <cstdlib> //난수발생 헤더파일
#include <ctime> //시간마다 다르게 난수 생성

using namespace std;

int main() {
	int answer, guess;
	int tries = 0;

	srand((unsigned)time(NULL)); //난수발생기 초기화
	answer = 1 + rand() % 50;
	/*
	rand()%50 : 0~49, 1+rand()%50 : 1~50 -> 초기값 설정
	*/
	do {
		cout << "정답 추측 : ";
		cin >> guess;
		tries++;
		if (guess > answer)
			cout << "너무 큼.\n";
		if (guess < answer)
			cout << "너무 작음.\n";
	} while (guess != answer);

	cout << "정답입니다!\n횟수 = " << tries << endl;
}
