/*
0이 아닌 3개의 좌표값을 입력받아 삼각형을 만들 수 있는지 검사하는 프로그램

3개의 점이 한 라인에 있으면 삼각형을 못 만듦
slope1, slope2 기울기 2개 변수 정의

*/
#include <iostream>
using namespace std;

int main() {

	double x1, y1, x2, y2, x3, y3;
	double slope1, slope2, slope3;
	//입력받을 x, y좌표와 기울기 3개 변수 정의
	
	cout << "x1, y1 의 좌표를 입력하세요\n";
	cin >> x1 >> y1;
	cout << "x2, y2 의 좌표를 입력하세요\n";
	cin >> x2 >> y2;
	cout << "x3, y3 의 좌표를 입력하세요\n";
	cin >> x3 >> y3;

	slope1 = (y1 - y2) / (x1 - x2);
	slope2 = (y1 - y3) / (x1 - x3);
	slope3 = (y2 - y3) / (x2 - x3);
	cout << slope1 << ", " << slope2 << ", " << slope3 << endl;

	if (slope1 == slope2 == slope3) 
		cout << "삼각형이 될 수 없습니다.\n";
	else
		cout << "삼각형을 만들 수 있습니다.\n";
	

	return 0;
}