#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int SIZE = 10;

int main() {
	int grade[SIZE]; // 배열의 개수는 10개
	int i, j,  max, min; 

	srand((unsigned)time(NULL));

	for (i = 0; i < SIZE; i++) {
		grade[i] = rand() % 51; // grade 배열의 원소에 0~50까지 랜덤의 수 생성
		cout << grade[i] << endl; //하나의 랜덤 수 출력
	}
	max = grade[0]; //grade[0]이 가장 크다고 가정
	for (i = 0; i < SIZE; i++) {
		if (max < grade[i]) //grade[0]이 생성된 난수보다 작으면
			max = grade[i];	//최대값은 생성된 난수가 됨
	for (j = 0; j <SIZE; j++)
		if (min > grade[j])
			min = grade[j];
	}
	cout << "MAX : " << max << endl; // 최대값은 max에 넣어주어 출력 
	cout << "MIN : " << min << endl; //최소값은 min에 넣어주어 출력

	return 0;
}

