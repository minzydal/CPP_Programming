#include <iostream>
using namespace std;

int main() {
	
	int length, width, height; //길이, 너비, 높이
	int box; //부피

	bool sw = true;

	while (1) {
		cout << "상자의 크기를 입력해주세요 : ";
		cin >> length >> width >> height;

		box = length * width * height;

		if (length > 200 || width > 200 || height > 200) {
				cout << "범위를 벗어났습니다."; 
		}
		else 
			sw = true;
		cout << "박스의 크기는 " << length * width * height << "입니다. " << endl;
		}
	}