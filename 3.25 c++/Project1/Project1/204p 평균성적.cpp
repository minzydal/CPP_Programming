#include <iostream>
using namespace std;

const int STUDENTS = 5; //define, 일반적으로 상수는 main 함수 이전에 선언

int main() {
	int grade[STUDENTS];
	/*변수로는 배열 크기 설정할 수 없음

	ex ) int num = 5;
	int grade[num]; <- 틀림

	*/
	int sum = 0, i, average;

	for (i = 0; i < STUDENTS; i++) 
	{
		cout << "성적 입력 : ";
		cin >> grade[i];
	}

	for (i = 0; i < STUDENTS; i++) 
	
		sum += grade[i];
		average = sum / STUDENTS;

		cout << "평균 : " << average << endl;
	

		return 0;
}